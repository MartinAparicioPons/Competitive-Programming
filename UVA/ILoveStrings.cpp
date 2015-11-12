#include <bits/stdc++.h>
#ifdef DEBUG
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define EL cerr << endl;
#else
#define DB(x)
#define DBL(x)
#define EL
#endif

#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define hash losredondos

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef set<int> si;
typedef set<ll> sll; 		typedef set<string> ss;
const static int MAXN = 100010;

struct node {
	int suff_link, par;
	si word_idx;
	char c;
	map < char, int > go;
	bool is_word;
	node() {
		suff_link = -1, par = -1;
		is_word = false;
	}
};

vector <node> trie;

void initTrie(){
	trie.clear();
	node r;
	r.suff_link = 0;
	trie.push_back(r);
}

void trieInsert(string &s, int idx) {
	int cur_node = 0;
	int len = s.size();
	for (int i = 0; i < len; i++) {
		int go = trie[cur_node].go[s[i]];
		if (go == 0) {
			node add;
			add.par = cur_node; add.c = s[i];
			trie.push_back(add);
			go = (int) trie.size() - 1;
			trie[cur_node].go[s[i]] = go;
		}
		cur_node = go;
	}   
	trie[cur_node].is_word = true;
	trie[cur_node].word_idx.insert(idx);
}

int go(int cur_node, char c);

int getSuffLink(int cur_node) {
	if (trie[cur_node].suff_link != -1)
		return trie[cur_node].suff_link;
	if (trie[cur_node].par == 0) 
		return trie[cur_node].suff_link = 0;
	char c = trie[cur_node].c;
	int parent = trie[cur_node].par;
	return trie[cur_node].suff_link = go(trie[parent].suff_link, c); 
}

int go(int cur_node, char c) {
	if (trie[cur_node].go.count(c) > 0)
		return trie[cur_node].go[c];
	if (cur_node == 0)
		return trie[cur_node].go[c] = 0;
	int suff_link = getSuffLink(cur_node);
	return trie[cur_node].go[c] = go(suff_link, c);
}

void buildAhoCorasick() {
	queue <int> q;
	q.push(0);
	while (!q.empty()) {
		int cur_node = q.front();
		q.pop();

		for (map <char, int> :: iterator it = trie[cur_node].go.begin(); it != trie[cur_node].go.end(); it++) {
			q.push(it->second);
		}

		int suff_link = getSuffLink(cur_node);
		trie[cur_node].suff_link = suff_link;
		if (trie[suff_link].is_word){
			trie[cur_node].is_word = true;
			for(int x : trie[suff_link].word_idx)
				trie[cur_node].word_idx.insert(x);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t, n, i, j, q;
	bool Ans[1010];
	string Z, T;
	cin >> t;
	while(t--){
		memset(Ans, false, sizeof Ans);
		cin >> T;
		initTrie();
		cin >> q;
		for(i = 0; i < q; i++){
			cin >> Z;
			trieInsert(Z, i);
		}
		buildAhoCorasick();
		int c = 0;
		for(i = 0; i < T.size(); i++){
			c = go(c, T[i]);
			if(trie[c].is_word){
				for(int idx : trie[c].word_idx){
					Ans[idx] = true;
				}
			}
		}
		for(i = 0; i < q; i++){
			cout << (Ans[i]?'y':'n') << "\n";
		}
	}
}

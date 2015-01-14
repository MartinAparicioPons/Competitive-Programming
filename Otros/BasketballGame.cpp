#include <cmath>
#include <iterator>
#include <cstdio>
#include <set>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <iostream>
#define X first
#define Y second
using namespace std;

// I dont know what problem is.

struct jug{
	int t, a;
};

bool operator<(const jug& a, const jug& b){
	if(a.t == b.t){
		return (a.a > b.a);
	} 
	return (a.t > b.t);
}

int main(){
	int t, n, m, p, i, j, l, h, k;
	pair<jug, string> jj[31];
	string aj[16], bj[16];
	set<string> S;
	cin >> t;
	for(l=1; l<=t; l++){
		cin >> n >> m >> p;
		S.clear();
		for(i=0;i<n;i++){
			cin >> jj[i].Y >> jj[i].X.t >> jj[i].X.a;
		}
		sort(jj, jj + n);
		for(i=0, j=0, k=0;i<n;i++){
			if(i%2==1){
				aj[j++] = jj[i].Y;
			} else
				bj[k++] = jj[i].Y;
			//if(k!=0)cout << "<< " << bj[k-1] << " " << aj[j-1];
		}
		int ag[p], af[p], w, q;
		for(i=0; i < p; i++){
			ag[p-i-1]=i;
			af[p-i-1]=i;
		//	printf("<<%d <%d\n", p-i-1, i);
		}
		h = p;
		w = p;
		q = p;
		m=((2*m)%(n));
		for(i=0; i < m; i++){
			(w>0)?w--:w=p;
			ag[w]=h;
			af[w]=q;
			q = (q+1)%(k-1);
			h = (h+1)%(j-1);
			printf("<<%d <%d\n", w, ag[w]);
			printf("    <%d\n", af[w]);
		}
		for(i=0; i < p; i++){
			S.insert(aj[ag[i]]);
			S.insert(bj[af[i]]);
			//printf("<<%d <%d\n", i, ag[i]);
			//cout << "<<< " << bj[(ag[i])%(k-1)] << " " << aj[(ag[i])%(j-1)] << "\n";
		}
		cout << "\nCase #" << l << ":";
		set<string>::iterator it;
		for(it = S.begin(); it != S.end(); it++){
			cout << " " << *it;
		}
		printf("\n");
	}
}

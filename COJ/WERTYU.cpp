#include <bits/stdc++.h>
#define for0(i, n) for(i = 0; i < n; i++)
#define for1(i, n) for(i = 1; i <= n; i++)
#define fora(i, a, n) for(i = a; i < n; i++)
#define dprc(x) printf("| %c\n", x)
#define dprd(x) printf("| %d\n", x)
#define dprd2(x,y) printf("| %d %d\n", x, y)
#define prd(x) printf("%d\n", x)
#define prd2(x,y) printf("%d %d\n", x, y)
#define scd(x) scanf("%d", &x)
#define scd2(x, y) scanf("%d%d", &x, &y)
#define NL() printf("\n")
#define PB push_back
#define MP make_pair
#define MT(x, y, z) MP(MP(x, y), z)
#define MTi(x, y, z) MP(x, MP(y, z))
#define MAX(x, y) ((x>y)?x:y)
#define X first
#define Y second
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	int i;
	map<char, char> m;
	m.insert(MP('s', 'a'));
	m.insert(MP('x', 'z'));
	m.insert(MP('w', 'q'));
	m.insert(MP('c', 'x'));
	m.insert(MP('v', 'c'));
	m.insert(MP('b', 'v'));
	m.insert(MP('n', 'b'));
	m.insert(MP('m', 'n'));
	m.insert(MP(',', 'm'));
	m.insert(MP('.', ','));
	m.insert(MP('/', '.'));
	m.insert(MP('d', 's'));
	m.insert(MP('f', 'd'));
	m.insert(MP('g', 'f'));
	m.insert(MP('h', 'g'));
	m.insert(MP('j', 'h'));
	m.insert(MP('k', 'j'));
	m.insert(MP('l', 'k'));
	m.insert(MP(';', 'l'));
	m.insert(MP('\'', ';'));
	m.insert(MP('e', 'w'));
	m.insert(MP('r', 'e'));
	m.insert(MP('t', 'r'));
	m.insert(MP('y', 't'));
	m.insert(MP('u', 'y'));
	m.insert(MP('i', 'u'));
	m.insert(MP('o', 'i'));
	m.insert(MP('p', 'o'));
	m.insert(MP('[', 'p'));
	m.insert(MP(']', '['));
	m.insert(MP('\\', ']'));
	m.insert(MP('1', '`'));
	m.insert(MP('2', '1'));
	m.insert(MP('3', '2'));
	m.insert(MP('4', '3'));
	m.insert(MP('5', '4'));
	m.insert(MP('6', '5'));
	m.insert(MP('7', '6'));
	m.insert(MP('8', '7'));
	m.insert(MP('9', '8'));
	m.insert(MP('0', '9'));
	m.insert(MP('-', '0'));
	m.insert(MP('=', '-'));
	string in, out;
	getline(cin, in);
	out = "";
	for(i = 0; i < in.size(); i++){
		out += (in[i] != ' ')?toupper(m[tolower(in[i])]):' ';
	}
	cout << out << endl;
}










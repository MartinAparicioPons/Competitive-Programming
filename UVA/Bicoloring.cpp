#include <stdio.h>
#include <queue>
#include <iostream>
#include <vector>
using namespace std;

//RE.

bool contains(vector<int> v, int e){
	for(size_t ii = 0; ii < v.size(); ii++){
		if (v[ii] == e) return true;
	}
	return false;
}

int main () {
	vector<int> nodos;
	vector<vector<int> > ady;
	int n, l, e2, e1, i;
	cin >> n;
	
	while (n >= 0){
		bool resultado = true;
		cin >> l;
		ady.resize(0);
		nodos.resize(0);
		ady.resize(l);
		nodos.resize(l);
		for (i = 0; i < l; i++){
			cin >> e1 >> e2;
			ady[e1].push_back(e2);
			ady[e2].push_back(e1);
			nodos [i] = 0;  	//Not visited
		}
		queue<int> q;
		while(! q.empty()) {
			q.pop();			//Vacío la pila
		}
		q.push(0);
		nodos[0] = 1;  			//Marcado como "rojo"
		while (!q.empty()) {
			int v = q.front();
			q.pop();
			for (size_t j = 0; resultado && (j < ady[v].size()); j++) {
				if (nodos[ady[v][j]] == 0) {				//Si no está visitado..
					nodos[ady[v][j]] = nodos[v] * (-1);		//Lo marco como el contrario del nodo actual.
					q.push(ady[v][j]);
				} else {
					if (nodos[ady[v][j]] == nodos[v]) {		//Si son del mismo color, no es bicolorable.
						resultado = false;
						while(! q.empty()) {
							q.pop();			//Vacío la pila
						}
					}
				}
			}
		}
	if (resultado) cout << "BICOLORABLE.\n";
	else cout << "NOT BICOLORABLE.\n";
	}
	return 0;
}	

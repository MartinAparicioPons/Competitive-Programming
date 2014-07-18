#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main () {
	int t, ng, nm, mg, mm, n;
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> ng >> nm;
		mg = mm = 0;
        for (int i = 0; i < ng; i++){
            cin >> n;
            mg = max(n, mg);
        }
        for (int i = 0; i < nm; i++){
            cin >> n;
            mm = max(n, mm);
        }
        if (mg >= mm)
            cout << "Godzilla" << endl;
        else
            cout << "MechaGodzilla" << endl;
	
	}
}

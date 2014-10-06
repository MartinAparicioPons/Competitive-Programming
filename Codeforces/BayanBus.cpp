#include <bits/stdc++.h>
using namespace std;


int main() {
    int i, j, n;
    char m[4][27];
    for(j = 0; j < 27; j++){
        for(i = 0; i < 4; i++){
            m[i][j] = ' ';
        }
    }
    cin >> n;
    for(i = 0; i < 4; i++){
        m[i][0] = '|';
    }
    for(j = 1; j < 27; j++){
        if(j < 23){
            if(j%2 == 1){
                for(i = 0; i < 4; i++){
                    if(i == 2 && j!=1) m[i][j] = '.';
                    else {
                        if(n <= 0) {
                            m[i][j] = '#';
                        }
                        else {
                            m[i][j] = 'O';
                            n--;
                        }
                    }
                    
                }
            } else {
                for(i = 0; i < 4; i++)
                    m[i][j] = '.';
                   
            }
        }
        if(j == 23){
            for(i = 0; i < 4; i++){
                if(i == 2) m[i][j] = '.';
                else m[i][j] = '|';
            }
        }
        
        if(j == 24){
            for(i = 0; i < 4; i++){
                if(i == 0) m[i][j] = 'D';
                else m[i][j] = '.';
            }
        }
        
        if(j == 25){
            for(i = 0; i < 4; i++){
                m[i][j] = '|';
            }
        }
        
        if(j == 26){
            for(i = 0; i < 4; i++){
                if(i == 3 || i == 0) m[i][j] = ')';
                else m[i][j] = ' ';
            }
        }
    }
    
    cout << "+------------------------+\n";
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 27; j++){
            if(j == 26 && (i == 1 || i == 2)) continue;
            cout << m[i][j];
        }
        cout << endl;
    }
    cout << "+------------------------+\n";
}

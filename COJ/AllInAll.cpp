#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;

int main(){
    int i, j;
    string a="", b="";
    while(cin >> a >> b){
        bool esta;
        for(i=0, j=0; ((i<a.size()) && (j<b.size()));){
            if(a[i] == b[j]){
                i++;j++;
            } else {
                j++;
            }
        }
        if(i<a.size())
            printf("No\n");
        else
            printf("Yes\n");
        a="";b="";
    }
}

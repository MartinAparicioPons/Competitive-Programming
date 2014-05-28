#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <map>
#include <cmath>
#include <utility>
#include <algorithm>
#include <cstdlib>
#include <vector>
using namespace std;


int main(){
	int n, g, s, r, i, tot=0;
	vector<int> difs;
	cin >> n >> r;
	//difs.resize(n);
	for(i = 0; i < n; i++){
		cin >> s >> g;
		if(g < s){
			tot+=3;
			//printf("tot: %d, G= %d, S= %d\n", tot, g, s);
		} else{
			difs.push_back(g - s);
		}
	}
	sort(difs.begin(), difs.end());
	for(i = 0; i < difs.size(); i++){
	//	printf("difs[%d] = %d\n", i, difs[i]);
		if(difs[i] == 0){
			//puts("1");
			if (r==0)tot++;
			else {
		//		printf("\t1\n");
				tot+=3;
				r--;
			}
		} else{
			if(difs[i] == r){
				//puts("2");
				tot++;
				r=0;
			}
			if(difs[i]+1 == r){
				//puts("3");
				r=0;
				tot+=3;
			}
			if(difs[i]+1 < r){
				//puts("4");
				r= r -(difs[i]+1);
				tot+=3;
			} else{
				if(difs[i] < r){
					//puts("5");
					r-=difs[i];
					tot++;
				}
			}
		}
	}
	/*
	for (; i < difs.size();i++){
		if(difs[i] == 0) tot++;
	}*/
	cout << tot;
}
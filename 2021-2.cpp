#include <bits/stdc++.h>
using namespace std;

typedef pair<double,double> P;
set<P> S;

void check(int x1,int y1,int x2,int y2);

int main(){
	for(int i=0;i<20;i++){
		for(int j=0;j<21;j++){
			for(int k=0;k<20;k++){
				for(int l=0;l<21;l++){
					check(i,j,k,l);
				}
			}
		}
	}
	cout << S.size()+20+21 <<endl;
	
	return 0;
}

void check(int x1,int y1,int x2,int y2){
	if(x1==x2 || y1==y2)
		return;
	double k = (y2-y1)/1.0/(x2-x1);
	double b = (x2*y1-x1*y2)*1.0/(x2-x1);
	S.insert({k,b});
	
}

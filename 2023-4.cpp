#include <bits/stdc++.h>

using namespace std;

int main(){
	int NUM,N,T,D,L,max;
	set <pair<int,int> > LMax;
	pair<int,int> P;
	
	cin >> NUM;
	
	for(int i=0;i<NUM;i++){
		cin >> N;
		for(int j=0;j<N;j++){
			cin >> T >> D >> L;
			max = T + D;
			P = {L,max};
		}
		
		
	}
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
	int N,K,n,m,a;
	long num;
	pair<int,int> P;
	vector<pair<int,int> > V;
	
	cin >> N;
	cin >> K;
	for(int i=0;i<N;i++){
		cin >> P.first;
		cin >> P.second;
		V.push_back(P);
	}
	
	num = 0;
	for(int i=1;i<=100000;i++){
		for(int j=0;j<N;j++){
			P = V[j];
			n = P.first/i;
			m = P.second/i;
			num += n*m;
			if(num>K)
				break;
		}
		if(num<K){
			a = i-1;
			break;
		}
		else if(num==K){
			a = i;		
		}
		num = 0;	
	}
	cout << a << endl;
	return 0;
}

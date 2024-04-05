#include <bits/stdc++.h>

using namespace std;

int gcd(int x,int y){
	int z;
	while(x%y != 0){
		z = x % y;
		x = y;
		y = z;
	}
	return y;
}
int main(){
	int n,a;
	set <long long> S;
	pair<int,int> P;
	set <pair<int,int> > S2;
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> a;
		S.insert(a);
	}
	
	
	return 0;
} 

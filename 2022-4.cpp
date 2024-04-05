#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin >> N;
	int h[N];
	
	for(int i=0;i<(N+1)/2;i++){
		h[i] = 2*(N-1-i);
		h[N-1-i] = 2*(N-1-i);
	}
	
	for(int j=0;j<N;j++){
		cout << h[j] << endl;
	}	
	
	return 0;
} 

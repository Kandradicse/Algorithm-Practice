#include <bits/stdc++.h>

using namespace std;

int main(){
	int N,num,ans,cnt;
	cin>>N;
	
	vector<int> A,B,nB;
	for(int i=0;i<N;i++){
		cin >> num;
		A.push_back(num);
	}
	
	for(int i=0;i<N;i++){
		cin >> num;
		cnt = 0;
		for(int j=0;j<N;j++){
			if(A[j]<num){
				cnt++;
			}
		}
		if(cnt){
			B.push_back(num);
			nB.push_back(cnt);
		}
	}
	A.clear();
	
	ans = 0;
	for(int i=0;i<N;i++){
		cin >> num;
		for(int j=0;j<B.size();j++){
			if(B[j]<num)
				ans += nB[j];
		}
	}
	
	cout << ans;


	return 0;
}

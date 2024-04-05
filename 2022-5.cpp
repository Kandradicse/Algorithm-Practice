#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,ma,mb,a,b,m,pro,ma2,mb2;
	long long ans; 
	vector <int> A;
	vector <int> B;
	vector <int> num;
	vector <int> dif;
	int mod = 1e9 + 7;
	
	ma2 = 0;
	mb2 = 0;
	
	cin >> n >> ma;
	while(ma2 != ma){
		cin >> a;
		A.push_back(a);
		ma2++;
	}
	
	cin >> mb;
	while(mb2 != mb){
		cin >> b;
		B.push_back(b);
		mb2++;
	}
	
	while((!A.empty()) && (!B.empty())){
		if(!A.empty()){
			a = A[ma-1];
			A.pop_back();
			ma--;
		}
		else{
			a = 0;
		}
		
		if(!B.empty()){
			b = B[mb-1];
			B.pop_back();
			mb--;
		}
		else{
			b = 0;
		}
		
		num.push_back(max(max(a+1,b+1),2));
		dif.push_back(abs(a-b));
		
	}
	
	m = dif.size();
	
	ans = dif[0];
	pro = 1;
	for(int l=0;l<m;l++){
		for(int j=0;j<l;j++){
			pro *= num[j];
		}
		ans += ((pro*dif[l])%mod);
		pro = 1;
	}	
	
	cout << ans%mod << endl;
	return 0;
}

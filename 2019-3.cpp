#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,dep,sum,num,p,max,ans,dif;
	cin >> n;
	
	dep = 0;
	num = 0;
	max = -1999999999;
	sum = 0;
	dif = n;
	for(int i=0;i<n;i=i+pow(2,dep-1)){
		for(int j=0;j<pow(2,dep);j++){
			cin >> p;
			sum += p;
			num++;
			if(num==n)
				break;
		}
		if(sum>max){
			max = sum;
			ans = dep;
		}
		sum = 0;
		dep++;
		dif = dif - pow(2,dep-1);		
	}
	
	for(int k=0;k<dif;k++){
		cin >> p;
		sum += p;
	}
	if(sum>max){
		max = sum;
		ans = dep+1;
	}
	cout << ans+1 << endl;
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int N,weight;
int W[100];
int flag[100];
set<int> wei;
int mul[3] = {1,0,-1};

void dfs(int a,int k){
	if(k==N){
		return;
	}
	
	int temp = weight;
	
	if(!flag[k]){
		for(int i=0;i<3;i++){
			weight = abs(weight + mul[i]*W[k]);
			flag[k]++;
			if(weight!=0)
				wei.insert(weight);
			dfs(weight,k+1);
			weight = temp;
			flag[k]--;
		}
	}
	else{
		if(weight!=0)
			wei.insert(weight);
		dfs(weight,k+1);
		weight = temp;
	}
	
	
	
	return;
}	

int main(){

	cin >> N;
	for(int i=0;i<N;i++){
		cin >> W[i];
	}
	
	memset(flag,0,sizeof(flag));
	
	for(int j=0;j<N;j++){
		weight = W[j];
		flag[j]++;
		dfs(weight,0);
		flag[j]--;
	}
	
	cout << wei.size() << endl;
	return 0;
}

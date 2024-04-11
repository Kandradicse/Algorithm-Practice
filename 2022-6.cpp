#include <bits/stdc++.h>

using namespace std;

int mat[500][500];

int getSum(int a,int b,int c,int d){
	int sum = 0;
	for(int i=a;i<=b;i++){
		for(int j=c;j<=d;j++){
			sum += mat[j][i];
		}
	}
	return sum;
}

int main(){
	int N,M,K,ans;
	
	cin >> N >> M >> K;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin >> mat[i][j];
		}
	}
	
	for(int a=0;a<M;a++){
		for(int b=a;b<M;b++){
			for(int c=0;c<N;c++){
				for(int d=c;d<N;d++){
					if(getSum(a,b,c,d)<=K){
						ans++;
					}
					else
						break;
				}
			}
		}
	}
	
	cout << ans << endl;
	return 0;
}

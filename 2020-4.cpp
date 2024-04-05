#include <bits/stdc++.h>

using namespace std;

int mapp[7][7] = {{0,1,0,0,0,1,0},{1,0,1,0,0,0,1},{0,1,0,1,0,0,1},{0,0,1,0,1,0,0},{0,0,0,1,0,1,1},{1,0,0,0,1,0,1},{0,1,1,0,1,1,0}};

bool check(int a[7]){
	int n=0;
	int flag[7];
	memcpy(flag,a,7*sizeof(int));
	
	while(n<7){
		if(flag[n]==1){
			for(int i=0;i<7;i++){
				if(mapp[n][i]==1)
					a[i] = 0;
			}
		}
		n++;
	}
	
	for(int j=0;j<7;j++){
		if(a[j]==1)
			return false;
	}
	return true;
}

int main(){
	int cho[7];
	int ans = 0;
	
	memset(cho,0,sizeof(cho));
	
	for(int a=0;a<7;a++){
		for(int b=a+1;b<7;b++){
			for(int c=b+1;c<7;c++){
				cho[a] = 1;
				cho[b] = 1;
				cho[c] = 1;
				if(check(cho))
					ans++;
				memset(cho,0,sizeof(cho));
			}
		}
	}
	
	memset(cho,1,sizeof(cho));
	for(int a=0;a<7;a++){
		for(int b=a+1;b<7;b++){
			for(int c=b+1;c<7;c++){
				cho[a] = 0;
				cho[b] = 0;
				cho[c] = 0;
				if(check(cho))
					ans++;
				memset(cho,1,sizeof(cho));
			}
		}
	}
	
	for(int a=0;a<7;a++){
		for(int b=a+1;b<7;b++){
			cho[a] = 1;
			cho[b] = 1;
			if(check(cho))
				ans++;
			memset(cho,1,sizeof(cho));			
		}
	}
	 
	ans += (7+20+7+1);
	cout << ans <<endl; 
	return 0;
}

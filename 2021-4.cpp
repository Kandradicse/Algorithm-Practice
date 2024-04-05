#include <bits/stdc++.h>

using namespace std;
int ans,len;
int mapp[2022][2022];
int flag[2022];

int gcd(int a,int b){
	int c = 0;
	if(b>a)
		swap(a,b);
	while(a%b != 0){
		c = a % b;
		a = b;
		b = c;
	}
	return b;
}

int pub(int a,int b){
	int c;
	c = a*b/gcd(a,b);
	return c;
}

void dfs(int a,int mapp[2022][2022]){
	
	if(a==2021){
		if(len<ans)
			ans = len;
		return;
	}
	
	int na;
	for(int i=-21;i<=21;i++){
		na = a + i;
		if(na>=1 && na<=2021 && flag[na]==0){
			len += mapp[a][na];
			flag[na] = 1;
			dfs(na,mapp);
			flag[na] = 0;
			len -= mapp[a][na];
		}
	}
	return;
}

int main(){
	memset(mapp,0,sizeof(mapp));
	memset(flag,0,sizeof(flag));
	
	for(int i=1;i<2022;i++){
		for(int j=1;j<2022;j++){
			if(abs(i-j)>21 || mapp[i][j]!=0)
				continue;
			mapp[i][j] = pub(i,j);
			mapp[j][i] = mapp[i][j];
		}
	}
	
	len = 0;
	flag[1] = 1;
	dfs(1,mapp);
	cout << ans << endl;
	return 0;
}

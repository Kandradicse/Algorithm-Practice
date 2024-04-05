#include <bits/stdc++.h>

using namespace std;

int mapp[3][4];
set<int> S;
set<set <int> > ans;
int flag[3][4];
int num=1;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void dfs(int a,int b,int c); 

int main(){
	memset(flag,0,sizeof(flag));
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			mapp[i][j] = num++;
		}
	}
	
	for(int x=0;x<3;x++){
		for(int y=0;y<4;y++){
			flag[x][y] = 1;
			S.insert(mapp[x][y]);
			dfs(x,y,1);
			flag[x][y] = 0;
			S.clear();
		}
	}
	
	cout << ans.size() << endl;
	return 0;
}

void dfs(int a,int b,int c){
	int na,nb;
	
	if(c==5){
		ans.insert(S);
		return;
	}
	
	for(int k=0;k<4;k++){
		na = a + dx[k];
		nb = b + dy[k];
		if(na>=0 && na<3 && nb>=0 && nb<4 && flag[na][nb]!=1){
			c++;
			S.insert(mapp[na][nb]);
			flag[na][nb] = 1;
			dfs(na,nb,c);
			c--;
			flag[na][nb] = 0;
			S.erase(mapp[na][nb]);
		}
	}
	return;
}

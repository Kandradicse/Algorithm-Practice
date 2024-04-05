#include <bits/stdc++.h>
using namespace std;

int maze[30][50];
int flag[30][50];
char dir[4] = {'D','L','R','U'};
int dx[4] = {0,-1,1,0};
int dy[4] = {1,0,0,-1};
int step = 9999;
int tempstep = 0;
int x = 0;
int y = 0;
string ans,tempans;

bool judge(int x,int y);
void find(int x,int y);

int main(){
	freopen("C:\\Users\\kandr\\Desktop\\maze.txt","r",stdin);
	memset(maze,0,sizeof(maze));
	memset(flag,0,sizeof(flag));
	char m;
	
	for(int i=0;i<30;i++){
		for(int j=0;j<50;j++){
			cin>>m;
			maze[i][j] = m - '0';
		}
	}
	
	find(x,y);
	cout<<ans<<endl;
	
	return 0;
}

bool judge(int x,int y){
	if(x>29 || y>49 || x<0 || y<0)
		return false;
	else
		return true;
}

void find(int x,int y){
	int tempx,tempy;
	
	if(x == 29 && y == 49) {
    	if(tempstep < step) {
        	ans = tempans;
        	step = tempstep;
    	}
    	else if(tempstep == step && tempans < ans){
    		ans = tempans;
        	step = tempstep;
		}
    	return;
	}

	
	for(int k=0;k<4;k++){
		tempx = x + dx[k];
		tempy = y + dy[k];
		if(!judge(tempx,tempy)){
			continue;
		}
		if(maze[tempx][tempy]==0 && flag[tempx][tempy]==0){
			tempstep++;
			tempans += dir[k];
			flag[tempx][tempy] = 1;
			find(tempx,tempy);
			flag[tempx][tempy] = 0;
			tempstep--;
			tempans.erase(tempans.end()-1); // 移除最后一个字符

		}
	}
		
}

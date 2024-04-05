#include <bits/stdc++.h>

using namespace std;

int main(){
	int size;
	
	cin>>size;
	
	if(size==1){
		printf("0");
		return 0;
	}
	
	vector<vector<char> > map(size, vector<char>(size));
    vector<vector<int> > flag(size, vector<int>(size, 0));
	int dx[4] = {1,-1,0,0};
	int dy[4] = {0,0,1,-1};
	queue<pair<int,int> > Q;
	pair<int,int> t;
	set<int> island;
	int newx,newy,pre,num,ID;
	
	num = 0;
	pre = 0;
	ID=1;
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++)
			cin>>map[i][j];
	}
	
	for(int x=0;x<size;x++){
		for(int y=0;y<size;y++){
			if(map[x][y] == '#' && flag[x][y] == 0){
				flag[x][y] = ID;
				Q.push({x,y});
				while(!Q.empty()){
					t = Q.front();
					Q.pop();
					newx = t.first;
					newy = t.second;
					for(int a=0;a<4;a++){
						if(newx+dx[a]>=0 && newx+dx[a]<size && newy+dy[a]>=0 && newy+dy[a]<size && map[newx+dx[a]][newy+dy[a]] == '#' && flag[newx+dx[a]][newy+dy[a]] == 0){
							Q.push({newx+dx[a],newy+dy[a]});
							flag[newx+dx[a]][newy+dy[a]] = ID;
						}
					}
				}
				pre++;
				ID++;
			}
		}
	}
	
	for(int l=0;l<size;l++){
		for(int k=0;k<size;k++){
			if(map[l][k] == '#'){
				for(int m=0;m<4;m++){
					if(l+dx[m]>=0 && l+dx[m]<size && k+dy[m]>=0 && k+dy[m]<size && map[l+dx[m]][k+dy[m]] == '.'){
						map[l][k] = '0';
					}
				}
			} 
		}	
	}
	
	for(int x=0;x<size;x++){
		for(int y=0;y<size;y++){
			if(map[x][y] == '#' && flag[x][y] != 0){
				island.insert(flag[x][y]);
			}
		}
	}
	
	num = island.size();
	printf("%d",pre-num);
	return 0;
}



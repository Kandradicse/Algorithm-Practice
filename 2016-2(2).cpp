#include<bits/stdc++.h>

using namespace std;

vector<int> grid;
set<vector<int> > S;
int num[10];
int dir[4] = {1,3,4,5};

bool check();

int main(){
	memset(num,0,sizeof(num));
	
	for(int a=0;a<10;a++){
		num[a] = 1;
		grid.push_back(a);
		for(int b=0;b<10;b++){
			if(!num[b]){
				num[b] = 1;
				grid.push_back(b);
				for(int c=0;c<10;c++){
					if(!num[c]){
						num[c] = 1;
						grid.push_back(c);
						for(int d=0;d<10;d++){
							if(!num[d]){
								num[d] = 1;
								grid.push_back(d);
								for(int e=0;e<10;e++){
									if(!num[e]){
										num[e] = 1;
										grid.push_back(e);
										for(int f=0;f<10;f++){
											if(!num[f]){
												num[f] = 1;
												grid.push_back(f);
												for(int g=0;g<10;g++){
													if(!num[g]){
														num[g] = 1;
														grid.push_back(g);
														for(int h=0;h<10;h++){
															if(!num[h]){
																num[h] = 1;
																grid.push_back(h);
																for(int i=0;i<10;i++){
																	if(!num[i]){
																		num[i] = 1;
																		grid.push_back(i);
																		for(int j=0;j<10;j++){
																			if(!num[j]){
																				grid.push_back(j);
																				if(check()){
																					S.insert(grid);
																				}
																				grid.pop_back(); 
																			}
																		}
																	}
																	num[i] = 0;
																	grid.pop_back(); 
																}
															}
															num[h] = 0;
															grid.pop_back(); 
														}
													}
													num[g] = 0;
													grid.pop_back(); 
												}
											}
											num[f] = 0;
											grid.pop_back(); 
										}
									}
									num[e] = 0;
									grid.pop_back(); 
								}
							}
							num[d] = 0;
							grid.pop_back(); 
						}
					}
					num[c] = 0;
					grid.pop_back(); 
				}	
			}
			num[b] = 0;
			grid.pop_back(); 
		}
		num[a] = 0;
		grid.pop_back(); 
	}
	cout<<S.size();
	return 0;
}


bool check(){
	for(int x=0;x<10;x++){
		for(int y=0;y<4;y++){
			if(x+dir[y]<10){
				if(abs(grid[x]-grid[x+dir[y]])==1){
					return false;
				}
				
			}
			else
				break;
		}
	}
	return true;
}

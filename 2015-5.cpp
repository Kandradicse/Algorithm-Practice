#include <bits/stdc++.h>

using namespace std;

int main(){
	int hui,rui,qi,sheng,xian,yang,xiang,san;
	int flag[10];
	
	memset(flag,0,sizeof(flag));
	
	for(int i=0;i<10;i++){//hui
		hui = i;
		flag[hui]++;
		for(int j=0;j<10;j++){//rui
			if(!flag[j]){
				rui = j;
				flag[rui]++;
				if(!flag[(hui+rui)%10]){//qi
					qi = (hui+rui)%10;
					flag[qi]++;
					for(int k=0;k<10;k++){//sheng
						if(!flag[k]){
							sheng = k;
							flag[sheng]++;
							for(int l=0;l<10;l++){//xian
								if(!flag[l] && (sheng+l+((hui+rui)/10))%10==rui){
									xian = l;
									flag[xian]++;
									for(int m=0;m<10;m++){//yang
										if(!flag[m] && (rui+m+((sheng+xian)/10))%10==sheng){
											yang = m;
											flag[yang]++;
											for(int o=0;o<10;o++){//san
												if(!flag[o]){
													san = o;
													flag[san]++;
													for(int p=0;p<10;p++){//xiang
														if(!flag[p] && (xiang+san+((rui+yang)/10))%10==yang && (xiang+san+((rui+yang)/10))/10==san){
															xiang = p;
															cout << hui << rui << qi << sheng << xian << yang << xiang << san << endl;
														}
													}
													flag[san] = 0;
												}
											}
											flag[yang] = 0;
										}
									}
									flag[xian] = 0;
								}
							}
							flag[sheng] = 0;
						}
					}
					flag[qi] = 0; 
				}
				flag[rui] = 0;
			}
		}
		flag[hui] = 0;
	}
	return 0;
}

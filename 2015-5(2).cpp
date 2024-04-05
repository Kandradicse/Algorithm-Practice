#include <bits/stdc++.h>

using namespace std;

int main(){
	int xiang,rui,sheng,hui,san,yang,xian,qi,num1,num2,num3;
	int f[10];
	
	memset(f,0,sizeof(f));
	
	for(int a=1;a<10;a++){
		if(!f[a]){
			xiang = a;
			f[a]++;
			for(int b=0;b<10;b++){
				if(!f[b]){
					rui = b;
					f[b]++;
					for(int c=0;c<10;c++){
						if(!f[c]){
							sheng = c;
							f[c]++;
							for(int d=0;d<10;d++){
								if(!f[d]){
									hui = d;
									f[d]++;
									for(int e=1;e<10;e++){
										if(!f[e]){
											san = e;
											f[e]++;
											for(int g=0;g<10;g++){
												if(!f[g]){
													yang = g;
													f[g]++;
													for(int h=0;h<10;h++){
														if(!f[h]){
															xian = h;
															f[h]++;
															for(int i=0;i<10;i++){
																if(!f[i]){
																	qi = i;
																	num1 = xiang*1000+rui*100+sheng*10+hui;
																	num2 = san*1000+yang*100+xian*10+rui;
																	num3 = san*10000+yang*1000+sheng*100+rui*10+qi;
																	if(num1+num2==num3){
																		cout << xiang << rui << sheng << hui << san << yang << xian << qi << endl;
																	}
																}
															}
															f[h] = 0;
														}
													}
													f[g] = 0;
												}
											}
											f[e] = 0;
										}
									}
									f[d] = 0;
								}
							}
							f[c] = 0;
						} 
					}
					f[b] = 0;
				}
			}
			f[a] = 0;
		}
	}
	return 0;
}

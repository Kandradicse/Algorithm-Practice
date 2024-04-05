#include <bits/stdc++.h>

using namespace std;

int main(){
	int ans = 0;
	
	for(int a=0;a<5;a++){
		for(int b=0;b<5;b++){
			for(int c=0;c<5;c++){
				for(int d=0;d<5;d++){
					for(int e=0;e<5;e++){
						for(int f=0;f<5;f++){
							for(int g=0;g<5;g++){
								for(int h=0;h<5;h++){
									for(int i=0;i<5;i++){
										for(int j=0;j<5;j++){
											for(int k=0;k<5;k++){
												for(int l=0;l<5;l++){
													for(int m=0;m<5;m++){
														if(a+b+c+d+e+f+g+h+i+j+k+l+m==13)
															ans++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}

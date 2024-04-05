#include <stdio.h> 

int main(){
	int A[] = {5,6,8,6,9,1,6,1,2,4,9,1,9,8,2,3,6,4,7,7,5,9,5,0,3,8,7,5,8,1,5,8,6,1,8,3,0,3,7,9,2,7,0,5,8,8,5,7,0,9,9,1,9,4,4,6,8,6,3,3,8,5,1,6,3,4,6,7,0,7,8,2,7,6,8,9,5,6,5,6,1,4,0,1,0,0,9,4,8,0,9,1,2,8,5,0,2,5,3,3};
	int B[1000];
	int num[13]={31,28,31,30,31,30,31,31,30,31,30,31};
	int count=0;
	int month,day,temp;
	int flag=0;
	
	for(int i=0;i<100;i++){
		if(A[i]==2){
			for(int j=i+1;j<100;j++){
				if(A[j]==0){
					for(int k=j+1;k<100;k++){
						if(A[k]==2){
							for(int l=k+1;l<100;l++){
								if(A[l]==3){
									for(int m=l+1;m<100;m++){
										if(A[m]<2){
											for(int n=m+1;n<100;n++){
												month = A[m]*10 + A[n];
												if(month<13 && month>0){
													for(int a=n+1;a<100;a++){
														for(int b=a+1;b<100;b++){
															day = A[a]*10 + A[b];
															if(day<num[month-1]+1 && day>0){
																temp = month*100 + day; 
																for(int c=0;c<count+1;c++){
																	if(B[c]==temp){
																		flag = 1;
																		break;
																	}
																}
																if(flag!=1){
																	B[count++] = temp;																	
																}
																else
																	flag = 0;
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
		}
	}
	printf("%d",count); 
	return 0;
	
	
}
	

#include <stdio.h>

int check(int A[]);
int* ones(int A[]);
int* tens(int A[]);
int* hundreds(int A[]);
int* thousands(int A[]);

int main(){
	int num[11];  //前9个数指示剩余卡片，最后一个数指示卡住的位置
	int *p;
	
	//initialisation
	for(int i=0;i<10;i++){
		num[i] = 2021;
	}
	num[10] = 0;
	
	//ones
	p = ones(num);
	num[0] += 1;
		
	//tens
	p = tens(num);
		
	//hundreds
	p = hundreds(num);
	
	//thousands
	p = thousands(num);
	
	printf("%d",num[10]-1);
	return 0;
}

int check(int A[]){
	for(int j=0;j<10;j++){
		if(A[j]<0)
			return j;
	}
	return 0;
} 

int* ones(int A[]){
	int flag;
	
	if(A[10]){
		return A;
	}
	
	for(int l=0;l<10;l++){
		A[l] -= 1;
	}
	
	flag = check(A);
	if(flag){
		A[10] = flag;
		return A;
	}
	return A;
}

int* tens(int A[]){
	int flag;
	int *p;
	
	if(A[10]){
		return A;
	}
	
	for(int k=1;k<10;k++){
		A[k] -= 10;
		flag = check(A);
		
		if(flag){
			A[10] = flag;
			return A;
		}
		
		p = ones(A);
		for(int y=0;y<10;y++){
			A[y] = *(p+y);
		}
		
		flag = check(A);
		
		if(flag){
			A[10] = k*10 + A[10];
			return A;
		}
		
	}
	return A;
}

int* hundreds(int A[]){
	int flag;
	int *p;
		
	if(A[10]){
		return A;
	}
	
	A[0] -= 10;
	
	for(int n=1;n<10;n++){
		A[n] -= 100;
		flag = check(A);
		
		if(flag){
			A[10] = flag;
			return A;
		}
		
		p = tens(A);
		for(int y=0;y<10;y++){
			A[y] = *(p+y);
		}
		
		flag = check(A);
		
		if(flag){
			A[10] = n*100 + A[10];
			return A;
		}
	}
	return A;
}

int* thousands(int A[]){
	int flag;
	int *p;
		
	if(A[10]){
		return A;
	}
	
	A[0] -= 120;
	
	for(int n=1;n<10;n++){
		A[n] -= 1000;
		flag = check(A);
		
		if(flag){
			A[10] = flag;
			return A;
		}
		
		p = hundreds(A);
		for(int y=0;y<10;y++){
			A[y] = *(p+y);
		}
		
		flag = check(A);
		
		if(flag){
			A[10] = n*1000 + A[10];
			
			return A;
		}
	}
	return A;
}

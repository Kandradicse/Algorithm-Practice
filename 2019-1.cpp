#include <stdio.h>

int main(){
	int a,b,c;
	a = 1;
	b = 1;
	c = 1;
	
	for(int i=4;i<=20190324;i++){
		switch(i%3){
			case 1: a=a+b+c;
			break;
			case 2: b=a+b+c;
			break;
			case 0: c=a+b+c;
			break;
			default: 0;
			break;
		}
		
		a %= 10000;
		b %= 10000;
		c %= 10000;
	}
	

	
	printf("%d",c);

	return 0;
}



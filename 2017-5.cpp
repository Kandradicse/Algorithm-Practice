#include<stdio.h>
int f(int x)
{
	for(int i=2;i<x;i++)
	if(x%i==0) return 0;
	return 1;
}
int main()
{
	int sum=1;
	int i,j,k,a,z;
	for(i=2;i<50000;i++)//ö���������� 
	if(f(i))//��������� 
	{
		for(k=1;k<10000;k++)//ö�ٹ��� 
		for(int h=1;h<1000;h++)
		{
			a=i+h*k;
			if(f(a)) sum++; 
			else {sum=1;break;} //�����������������ѭ��������һ������ 
			if(sum==10)//����10��������ʱ��������� 
			{
				printf("%d\n",k);
				return 0;
			}	
		}
	}
	return 0;
}


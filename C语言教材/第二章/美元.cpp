#include<stdio.h>//����һ����Ԫ��������ʾ������5%˰�ʺ����Ӧ��� 
int main () 
{
	float a,b;
	printf("Enter an amount:"); 
	scanf("%f",&a); 
	b=a*(1+0.05);
	printf("With tax added:%.2f",b);
	return 0 ;
	}

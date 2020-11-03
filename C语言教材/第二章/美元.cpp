#include<stdio.h>//输入一个美元数量，显示出增加5%税率后的相应金额 
int main () 
{
	float a,b;
	printf("Enter an amount:"); 
	scanf("%f",&a); 
	b=a*(1+0.05);
	printf("With tax added:%.2f",b);
	return 0 ;
	}

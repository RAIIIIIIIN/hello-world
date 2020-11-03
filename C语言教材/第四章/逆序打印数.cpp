//要求用户输入一个两位数，然后按数位的逆序打印出这个数
#include<stdio.h>
int main()
{
	int a,b,c; 
	printf("Enter a two-digit number:");
	scanf ("%d",&a);
	b=a%10;
	c=a/10;
	printf("The reversal is:%d%d\n",b,c);
	
	
	
	//三位数的逆转 
	int u,v, w,i;
	printf("Enter a three-digit number:");
	scanf("%d",&i);
	u=i%10;
	w=(i-u)/100;
	v=(i-u)/10%10;
	printf("%d%d%d\n",u,v,w);
	
	//三位数的逆转2
	int i1,i2,i3;
	printf("Enter a three -digit number:");
	scanf("%1d%1d%1d",&i1,&i2,&i3);
	printf("%1d%1d%1d",i3,i2,i1);
	 
	
	
	 
	return 0;
 } 

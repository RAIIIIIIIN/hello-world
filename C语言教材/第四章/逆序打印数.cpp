//Ҫ���û�����һ����λ����Ȼ����λ�������ӡ�������
#include<stdio.h>
int main()
{
	int a,b,c; 
	printf("Enter a two-digit number:");
	scanf ("%d",&a);
	b=a%10;
	c=a/10;
	printf("The reversal is:%d%d\n",b,c);
	
	
	
	//��λ������ת 
	int u,v, w,i;
	printf("Enter a three-digit number:");
	scanf("%d",&i);
	u=i%10;
	w=(i-u)/100;
	v=(i-u)/10%10;
	printf("%d%d%d\n",u,v,w);
	
	//��λ������ת2
	int i1,i2,i3;
	printf("Enter a three -digit number:");
	scanf("%1d%1d%1d",&i1,&i2,&i3);
	printf("%1d%1d%1d",i3,i2,i1);
	 
	
	
	 
	return 0;
 } 

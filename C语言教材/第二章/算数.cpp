#include<stdio.h>
int main()
{
	int x,y; 
	printf("Enter x:");
	scanf("%d",&x);
	y= ((((3*x+2)*x-5)*x-1)*x+7)*-6;
	printf("3x^5+2x^4-5x^3-x^2+7x-6=%d\n",y);
	
	return 0;
 } 

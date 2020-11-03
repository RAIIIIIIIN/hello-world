#include<stdio.h>
#include <stdlib.h>
int main(){
	int number,a,b,c,d,e;
	printf("Enter a number between 0 and 32767:");
	scanf("%d",&number);
	e=number%8;
	d=(number/8)%8;
	c=((number/8)/8)%8;
	b=(((number/8)/8)/8)%8;
	a=((((number/8)/8)/8)/8)%8;
	printf("In octal,your number is :%d%d%d%d%d",a,b,c,d,e);
	system("pause"); 
	return 0;
	
} 

#include<stdio.h>
int main(){
	int number;
	printf("������һ��������");
	scanf("%d",&number);
	do{
		printf("%d",number%10);
		number/=10;
		
	}while(number);
	 
	return 0;
	 
	
}

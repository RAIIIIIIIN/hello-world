#include<stdio.h>//ʹ�û�ͬʱ���������������м��üӺŸ�������������������ӵĽ�� 
int main(){
	int num1,num2,num3,num4,num5,num6;
	printf("Enter two fractions separated by a plus sign:");
	scanf("%d/%d+%d/%d",&num1,&num2,&num3,&num4);
	num5=num1*num4+num3*num2;//������� 
	num6=num2*num4;//�����ĸ
	printf("The sum is %d/%d",num5,num6);
	return 0 ;
	pause(); 
} 

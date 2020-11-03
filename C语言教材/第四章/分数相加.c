#include<stdio.h>//使用户同时输入两个分数，中间用加号隔开，计算两个分数相加的结果 
int main(){
	int num1,num2,num3,num4,num5,num6;
	printf("Enter two fractions separated by a plus sign:");
	scanf("%d/%d+%d/%d",&num1,&num2,&num3,&num4);
	num5=num1*num4+num3*num2;//计算分子 
	num6=num2*num4;//计算分母
	printf("The sum is %d/%d",num5,num6);
	return 0 ;
	pause(); 
} 

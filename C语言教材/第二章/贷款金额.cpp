#include<stdio.h>
int main(){
	float a,b,c,one,two,three;
	printf("Enter amount of loan:");
	scanf("%f",&a);
	printf("Enter intrest rate:");
	scanf("%f",&b);
	printf("Enter monthly payment:");
	scanf("%f",&c);
	
	one =a-c+a*b*0.01/12;
	printf("Balance remaining after first payment:%.2f\n",one);
	two=one*b*0.01/12+one-c;
	printf("Balance remaining after second payment:%.2f\n",two);
	three=two*b*0.01/12+two-c;
	printf("Balance remaining after third payment:%.2f\n",three);
	
	return 0;
	
} 

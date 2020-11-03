#include<stdio.h>
int main(){
	
	float a, b;//a代表收入，b代表税金
	
	printf("请输入需纳税的收入：$");
	scanf("%f",&a); 
	
	if (a<750)
	 b=a*0.01f ;
	else if(a<2250)
	 b=7.50f+(a-750)*0.02f;
	else if(a<3750)
	 b=37.50f+(a-2250)*0.03f;
	else if(a<5250)
	 b=82.50f+(a-3750)*0.04f;
	else if(a<7000)
	 b=142.50f+(a-5250)*0.05f;
	else
	 b=230.00f+(a-7000)*0.06f; 
	 
	printf("税金：$%.2f",b);
	return 0;     
	
} 

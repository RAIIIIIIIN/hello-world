#include<stdio.h>
int main(){
	float r,v;
	printf("The radius of the ball:");
	scanf("%f",&r);
	v=4.0f/3.0f*3.14f*r*r*r;
	printf("The volume of the ball:%.1f",v);
	return 0;
	} 

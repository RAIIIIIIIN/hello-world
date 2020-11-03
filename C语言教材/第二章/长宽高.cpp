#include<stdio.h> 
int main(void)
{
	int height,width,length,volume,weight;
	
	printf("Enter height of box:");
	scanf("%d",&height);
	printf("Enter width of box:");
	scanf("%d",&width);
	printf("Enter length of box:"); 
	scanf("%d",&length);
	volume=height*width*length;
	weight=(volume+165)/166;
	
	printf("volume:%d\n",volume); 
	printf("dimensinal weight:%d\n",weight);
	 
	return 0;
	
}

#include<stdio.h>//��24Сʱ��ʱ��ת��Ϊ12Сʱ��ʱ�� 
int main(){
	int a,b; 
	printf("Enter a 24-hour time:"); 
	scanf("%d:%d",&a,&b);
	if (a==0)
	
	   printf("Equivalent 12-hour time: 12:%.2d AM",b);
	    
	else if(a==12)
	    printf("Equivalent 12-hour time: 12:%.2d PM",b)  ;
	else if(a>0&&a<12)
	    printf("Equivalent 12-hour time: %.2d:%.2d AM",a,b);
    else if(a>12&&a<24)
	    printf("Equivalent 12-hour time: %.2d:%.2d PM",a-12,b);		    
	return 0 ;
}
	   

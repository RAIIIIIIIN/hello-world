#include <stdio.h>
int main(){
	int i,n,starting;
	printf("Enter number of days in month:");//��������µ����� 
	scanf("%d",&n);
	printf("Enter starting day of the week(1=Sun,7=Sat):");//�����������ʼ�������ڼ�
	scanf("%d",&starting);
	for(i=1;i<starting;i++)
	  printf("   ") ;
	for(i=1;i<=n;i++)
	  if((i+starting-1)%7!=0)
	    printf("%3d",i);
	  else 
	    printf("%3d\n",i);
	return 0;	  
	   
	
}

#include<stdio.h>
int main()
{
	int i;
	i=1;
	printf("i is %d\n",++i);
	printf("i is %d\n",i);//用++i则立即自增1 
	
	
	int j;
	j =1;
	printf("j is %d\n",j++);
	printf("j is %d\n",j);//用i++则先显示原来的j，再自增 
	
	int a=1;
	a +=2;
	printf("%d\n",a);
	
	int b=1;
	b=b+2;
	printf("%d\n",b); 
	
	return 0;
	 
}

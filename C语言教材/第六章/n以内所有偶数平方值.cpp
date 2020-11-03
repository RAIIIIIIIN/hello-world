#include<stdio.h>
int main(){
	int i,n;
	printf("请输入一个数："); 
	scanf("%d",&n); 
	for(i=2;i*i<=n;i+=2)

	    printf("%d\n",i*i);
	return 0;    
}

#include<stdio.h>;
int main(void){
	int a,b,c,d,e;//a代表GS1前缀；b代表组标识；c代表出版商编号；d代表产品编号；e代表校检数字
	
	printf("Enter ISBN:");
	scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);
	printf("GS1 prefix:%d\n",a);
	printf("Group identifier:%d\n",b); 
	printf ("Publisher code:%d\n",c);
	printf("Item number:%d\n",d);
	printf("Check digit:%d\n",e);
	return 0;
	
} 

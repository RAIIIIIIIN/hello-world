//以月日年的格式接受用户录入的日期信息，并以年日月的格式将其显示出来 
#include<stdio.h>
int main(){
	int m ,d ,y;
	printf("Enter a date(mm/dd/yy):");
	scanf("%d/%d/%d",&m,&d,&y);
	printf("You entered the date %d%2.2d%d\n",y,m,d);/*%2.2表示至少占两个
	空间且保证有两位数字*/ 
	return 0 ;
	
}

#include<stdio.h>
int main(){
	int m,d,y,min1,min2,min3;
	printf("当输入0/0/0时，输入结束\n"); 
	printf("Enter a date (mm/dd/yy) :");
	scanf("%d/%d/%2d",&m,&d,&y);
    min1=m;
	min2=d;
	min3=y;
    while(m!=0&&d!=0&&y!=0){
    	printf("Enter a date (mm/dd/yy) :");
        scanf("%d/%d/%2d",&m,&d,&y);
        if(y<min3){
	       min3=y;
	       printf("%d/%d/%2d is the earliest date",m,y,min3 );
    	}
		 
}
	return 0;
	
}

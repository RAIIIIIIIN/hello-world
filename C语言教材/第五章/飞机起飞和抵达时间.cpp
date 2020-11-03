#include<stdio.h>
int main(){
	int hour,minute,sum;
	printf("请输入24小时制时间：");
	scanf("%d:%d",&hour,&minute);
	sum=hour*60+minute;
	if(sum<480)
	 printf("Cloest departure time is 8:00 a.m., arriving at 10:16 a.m.");
	else if(sum<593)
	 printf("Cloest departure time is 9:43 a.m., arriving at 11:52 a.m.");
	else if(sum<679)
	 printf("Cloest departure time is 11:19 a.m., arriving at 1:31 p.m.");  
	else if(sum<767)
	 printf("Cloest departure time is 12:47 p.m., arriving at 3:00 p.m.");  
	else if(sum<840)
	 printf("Cloest departure time is 2:00 p.m., arriving at 4:08 p.m.");  
	else if(sum<945)
	 printf("Cloest departure time is 3:45 p.m., arriving at 5:55 p.m.");  
	else if(sum<1140)
	 printf("Cloest departure time is 7:00 p.m., arriving at 9:20 p.m.");  
	else if(sum<1305)
	 printf("Cloest departure time is 9:45 p.m., arriving at 11:58 p.m.");
	else
	 printf("There is no flight.")   ;
	return 0; 
	 
	  
} 

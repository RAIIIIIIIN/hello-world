#include<stdio.h>
int main(){
	float v;
	printf("请输入风速：");
	scanf("%d",&v);
	if(v<1)
	  printf("无风");
	else if(v<=3)
	  printf("轻风");
	else if(v<=27)
	  printf("微风"); 
	else if(v<=47)
	  printf("大风");
	else if(v<=63)
	  printf("暴风");
    else
      printf("飓风");
    return 0;
	
}

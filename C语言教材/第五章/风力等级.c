#include<stdio.h>
int main(){
	float v;
	printf("��������٣�");
	scanf("%d",&v);
	if(v<1)
	  printf("�޷�");
	else if(v<=3)
	  printf("���");
	else if(v<=27)
	  printf("΢��"); 
	else if(v<=47)
	  printf("���");
	else if(v<=63)
	  printf("����");
    else
      printf("쫷�");
    return 0;
	
}

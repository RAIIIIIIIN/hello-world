#include<stdio.h>
int main(){
 
char first_name;
char ch_1;//����
char ch_2;//����
 
printf("Enter a first and last name:");
first_name=getchar();//������ֵ�����ĸ 
while (getchar() != ' ')//�������
{ 
  ch_1=getchar();
 
}
 
while ((ch_2 = getchar()) != '\n')//�������
{
 
 printf("%c",ch_2);//������� 
}
 
printf(",");
putchar(first_name);//���ֵ�����ĸ 
printf("."); 
}

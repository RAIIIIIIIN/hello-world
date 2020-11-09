#include<stdio.h>
int main(){
 
char first_name;
char ch_1;//名字
char ch_2;//姓氏
 
printf("Enter a first and last name:");
first_name=getchar();//获得名字的首字母 
while (getchar() != ' ')//获得名字
{ 
  ch_1=getchar();
 
}
 
while ((ch_2 = getchar()) != '\n')//获得姓氏
{
 
 printf("%c",ch_2);//输出姓氏 
}
 
printf(",");
putchar(first_name);//名字的首字母 
printf("."); 
}

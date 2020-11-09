#include<stdio.h>
int main(void){
float i,max;
   printf("Enter a number:");
   scanf("%f",&i);
   max=i;
   while(i>0){//如果输入的数为零或者负数，那么则退出程序 
     
      printf("Enter a number:");
      scanf("%f",&i);
      if(i>max){
          max=i;}
      }
    printf("The biggest number is %f",max);
return 0;
}

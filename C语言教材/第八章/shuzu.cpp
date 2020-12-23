#include<stdio.h> 

#define true 1
#define false 0
typedef int bool;

int main(){
	bool weekend[7]={[0]=true,[7]=true};
	int i;
    for (i=0;i<7;i++)
      printf("%d",weekend[i]);
      return 0;
}

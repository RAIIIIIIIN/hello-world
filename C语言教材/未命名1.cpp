#include<stdio.h>
int main(){
    int i,command;
	
	
	
	
	printf("Enter an integer: ");
	scanf("%d", &i);
	printf("Enter a command: ");
	command = getchar();
    printf("%d %d",i,command);
    return 0;  
}


#include<stdio.h>
#include<string.h>
int main(){
	char str[200];
	
	gets(str);
	printf("%s",str);
	printf("%d",strlen(str));
	return 0;
	
}

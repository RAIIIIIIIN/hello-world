#include<stdio.h>
int main(){
	int sum=0;
	char ch;
	while((ch=getchar())!=' '&&(ch=getchar())!='\n'){
		sum++;
	}
	printf("%d",sum);
	return 0;
} 

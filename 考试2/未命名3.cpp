#include<stdio.h>
int main(){
	char letters[20];
	printf("Enter it:");
	fgets(letters,20,stdin);
	printf("%s",letters);
	return 0;
}

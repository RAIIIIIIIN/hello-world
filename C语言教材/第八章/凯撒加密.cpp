#include<stdio.h>
#include<ctype.h>
#define N 80

int main(){
	int n;
	int num;
	int i;
	char ch;
	char sentence[N]; 
	
	printf("Enter message to be encrypted: ");

	
	
	while((ch=getchar())!='\n'){
		sentence[num]=ch;
		num++;
	}
	
	printf("Enter shift amount(1-25): ");
	scanf("%d",&n);
	
	printf("Encrypted message: ");
	for(i=0;i<num;i++)
	{ 
	if (sentence[i]>='a'&&sentence[i]<='z')
	 sentence[i]=((sentence[i]-'a')+n)%26+'a';
	else if (sentence[i]>='A'&&sentence[i]<='Z')
	 sentence[i]=((sentence[i]-'A')+n)%26+'A';
	else
	 sentence[i]=sentence[i];
	printf("%c",sentence[i]);
	 
	 
	}
	
	
	
	
	return 0;
}

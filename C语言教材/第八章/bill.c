#include<ctype.h>
#include<stdio.h>
#define N 50
int main(){
	int num=0;
	int i=0;
	char message[N];
	char ch;
	printf("Enter message: ");
	
	while ((ch=getchar())!='\n')
	{
		ch=toupper(ch);
		message[num]=ch;
		num++;
	}
	
	for(i=0;i<num;i++)
	{ if(message[i]=='A')
   message[i]='4';
  else if(message[i]=='B')
   message[i]='8';
  else if(message[i]=='E')
   message[i]='3';
  else if(message[i]=='I')
   message[i]='1';
  else if(message[i]=='O')
   message[i]='0';
  else if(message[i]=='S')
   message[i]='5';
 
  else
   message[i]=message[i];

	}
	
	printf("\nIn B1FF-speak:");
	for(i=0;i<num;i++)
	{
		printf("%c",message[i]);
	}
	printf("!!!!!!!!!!");
	return 0;
}

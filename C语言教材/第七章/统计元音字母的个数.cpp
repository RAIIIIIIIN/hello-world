#include<ctype.h>
#include<stdio.h>

int main(){
	
	int sum=0;
	char ch;
	
	printf("Enter a sentence:");
	
	 while ((ch = getchar()) != '\n')
	   switch (toupper(ch)) {
         case'A':case'E':case'I':case'O':case'U':
         	sum++;break;
         default:
		    sum=sum;break;	}
	
	
	printf("Your sentence contains %d vowels.",sum); 	    
}
 

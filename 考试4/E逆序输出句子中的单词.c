#include<stdio.h>
#include<string.h>
#include<ctype.h> 
int main(){
	char str[500];
	int len;
	int i;
	int j=0;
	
	
	gets(str);
	len=strlen(str);
	for (i=0;i<len;i++){
		
		if(toupper(str[i])>'Z'||toupper(str[i])<'A'){
			
			int k;
			for(k=i-1;k>=j;k--){
				printf("%c",str[k]);
			}
			printf("%c",str[i]);
			j=i+1;
		}
	}
	return 0;
}




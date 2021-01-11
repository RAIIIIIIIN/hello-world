#include<stdio.h>
#include<string.h>
int main(){
	char str[200];
	int length;
	char temp;
	int n;
	int i;
	int m;
	scanf("%d\n",&n);
	
	gets(str);
	length=strlen(str);
	
	for(i=0;i<n;i++){
		temp=str[length-1];
		for(m=length-1;m>0;m--){
			
			
			
			
			str[m]=str[m-1];
			 
		}
		
		str[0]=temp;
		
	}
	printf("%s\n",str);
	return 0;
	//用于排列顺序
	 
}

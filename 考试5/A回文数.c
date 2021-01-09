#include<stdio.h>
#include<string.h>
int main(){
	
	int n;
	int i;
	int i1;
	char num[50];
	char reverse[50];
	int len;
	int count=0;
	
	
	scanf("%d",&n);
	for(i1=0;i1<n;i1++)
	{
		int j=0;
		scanf("%s",num);
		len=strlen(num);
		for(i=len-1;i>=0;i--)
		    
		         reverse[j++]=num[i];
		
	
	    for(i=0;i<len;i++){
         if(num[i]!=reverse[i])
          count++;
        }
        if(count==0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
    
}

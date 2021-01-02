#include<stdio.h>
#include<stdlib.h>
int main(){
	int m;
	int a[20];
	int b[20];
	int i;
	int max=0;
	int result;
	scanf("%d",&m); 
    for(i=0;i<m;i++){
    	scanf("%d",&a[i]);
    	b[i]=abs(a[i]);
        if(max<b[i])
        {
            max=b[i];
			result=a[i];	
		}
    	
    	
	}
	printf("%d",result);
	return 0;
}

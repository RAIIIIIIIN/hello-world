#include<stdio.h>
#include<stdlib.h>

int comp(const void*a,const void*b);
int main(){
	
	
	int i;
	int n;
	
	
	int p,q;
	int temp;
	int num[100]={0};
	int i1;

	
	scanf("%d",&n);
	for(i1=0;i1<n;i1++)
	{
		int len=0;
		for(i=0;;i++){
			
		scanf("%d",&num[i]);
		len++;
		if(getchar()=='\n')
		break;
	    }
		int a=0;
		int b=0;
		int ji[100]={0};
		int ou[100]={0};
		
		
		for(i=0;i<len;i++)
		{
		if(num[i]%2!=0)
		    ji[a++]=num[i];
        else
		    ou[b++]=num[i]; 	
		}
		
		
	
	    qsort(ji,a,sizeof(int),comp);
		qsort(ou,b,sizeof(int),comp);
		 
	    for(i=0;i<a;i++)
	    printf("%d ",ji[i]);
	    
	
	    for(i=0;i<b;i++)
	    printf("%d ",ou[i]);
	    
	    printf("\n");
    }
	return 0;
}
int comp(const void*a,const void*b)
{
return *(int*)a-*(int*)b;
}

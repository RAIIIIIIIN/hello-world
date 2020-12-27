#include<stdio.h>
int main()
{
    int i,n;
	int num,k,m;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        m=0;
	    scanf("%d",&num);

        k=num;
        while(k>0)
        {
             m=m*10+k%10;
             k=k/10;
        }
        if(m==num)
           printf("Yes\n");
        else
           printf("No\n");
          
    
		}
		
    return 0;
}


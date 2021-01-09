#include<stdbool.h>
#include<stdio.h> 

void PrintFactors(int n);

int main()
{
    int k;
	int n;
	int i;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
	
         scanf("%d",&n);
    
	     PrintFactors(n);
    }
}


void PrintFactors(int n)
{
    int factor;
    bool first;//为了使第一个因数前不打出*号 

    first = true;
    for (factor=2;n>1;factor++)
    {
        while (n%factor==0)
        {
            if (!first)
            printf("*");
            first = false;
            printf( "%d", factor ); 
            n /= factor;
        }
    }
    printf("\n");

}

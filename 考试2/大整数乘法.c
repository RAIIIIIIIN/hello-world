#include<stdio.h>
#include<string.h>
#include<malloc.h>
#define Int(X) (X - '0') 
 
int *multiBigInteger(const char *, const char *);
int checkNum(const char *);
 
int main(void)
{
    int a, n;
    scanf("%d", &a);
    for(n=0;n<a;n++){
     char num1[500] = {'\0'}, num2[500] = {'\0'};
    while(scanf("%s%s", num1, num2) != EOF)
    {
        int *result = NULL;
        int i; 
  int change = 0;

        result = multiBigInteger(num1, num2);
        for(i = 1; i <= result[0]; i++)
        {
            if(result[i] != 0) 
                change = 1;
            if(!change)
            {
                if(i > 1)        
                    {
                        printf("0");
                        break;
                    }
                continue;
            }
            printf("%d", result[i]);
        }
        printf("\n");
    }}
    return 0;}
    int checkNum(const char *num){
    int i;
    for(i = 0; (size_t)i < strlen(num); i++)
    {
        if(num[i] < '0' || num[i] > '9')
        {
            return 1;
        }
    }
    return 0;
}
 
int *multiBigInteger(const char *num1, const char *num2)
{
    int *result = NULL;                
    int num1Len = strlen(num1);       
    int num2Len = strlen(num2);        
    int resultLen;                     
    int i, j;                         
    resultLen = num1Len + num2Len;     
    result = (int *)malloc((resultLen+1)*sizeof(int));
    memset(result, 0, (resultLen+1)*sizeof(int));
    result[0] = resultLen; 
    for(j = 0; j < num2Len; j++)
    {
        for(i = 0; i < num1Len; i++)
        {
            result[i+j+2] += Int(num1[i]) * Int(num2[j]);
        }
    }

    for(i = resultLen; i > 1; i--)
    {
        result[i-1] += result[i]/10;
        result[i] = result[i]%10;
    }
    return result;
}


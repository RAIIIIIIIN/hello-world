#include <stdio.h>
int main()
{
    int mm,dd,yyyy,mm1,dd1,yyyy1;
     printf("Enter first date (mm/dd/yy):");
    scanf("%d/%d/%d",&mm,&dd,&yyyy);
    printf("Enter second date (mm/dd/yy):");
    scanf("%d/%d/%d",&mm1,&dd1,&yyyy1);
    if(yyyy>yyyy1)
      printf("%d/%d/%2.2d is earlier than %d/%d/%2.2d",mm1,dd1,yyyy1,mm,dd,yyyy);
    else if(yyyy=yyyy1)
       if(dd>dd1)
         printf("%d/%d/%2.2d is earlier than %d/%d/%2.2d",mm1,dd1,yyyy1,mm,dd,yyyy);
       else if(dd=dd1)
	  
          if(mm>mm1)
             printf("%d/%d/%2.2d is earlier than %d/%d/%2.2d",mm1,dd1,yyyy1,mm,dd,yyyy);
          else
             printf("%d/%d/%2.2d is earlier than %d/%d/%2.2d",mm,dd,yyyy,mm1,dd1,yyyy1);
       else      
         printf("%d/%d/%2.2d is earlier than %d/%d/%2.2d",mm,dd,yyyy,mm1,dd1,yyyy1);
    else
      printf("%d/%d/%2.2d is earlier than %d/%d/%2.2d",mm,dd,yyyy,mm1,dd1,yyyy1);
     return 0;}

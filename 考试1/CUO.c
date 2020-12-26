#include<stdio.h>
#include<string.h>
int main(void)
{
 int num, i, j, ns, nc, nu, na, loc_s, loc_c, loc_u, loc_a, pre, post, ans;
 char str[100];
 scanf("%d",&num);
 for(i=0;i<num;i++)
 {
  ans=1;
  ns=0;
  nc=0;
  nu=0; 
  loc_s=0;
  loc_c=0;
  loc_u=0;
  scanf("%s",str);
  for(j=0;j<strlen(str);j++) 
  {
   switch(str[j])
   {
    case 'S':ns++;loc_s=j;break;
    case 'C':nc++;break;
    case 'U':nu++;loc_u=j;break;
    case 'A':break;
    default:ans=0;break;
   }
  }
 pre=loc_s;
 post=strlen(str)-loc_u-1;
 if((ns==1)&&(nc==1)&&(nu==1)&&(pre==post)&&(ans==1))
 printf("YES\n");
 else
 printf("NO\n");
 }
}

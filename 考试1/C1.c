#include<stdio.h>
#include<string.h>
void main()
{
 int n,i,j;
 int ans;//�����ַ� 
 int ansa;
 int ns;//s�ĸ���
 int nc;//c�ĸ��� 
 int nu;//u�ĸ���
 int loc_s;//����s��λ��
 int loc_c;//����c��λ�� 
 int loc_u;//����u��λ�� 
 int pre;//s֮ǰ��A����
 int post;//u֮���A����
 char str[100];
 scanf("%d",&n);//Ҫ������ַ�������
 for(i=0;i<n;i++)
{
  ans=1;
  ansa=1;
  loc_s=0;
  loc_c=0;
  loc_u=0;
  ns=0;
  nc=0;
  nu=0;
  scanf("%s",str);
  for(j=0;j<strlen(str);j++)
  {
   switch(str[j])
   {
    case 'S':ns++;loc_s=j;break;
    case 'C':nc++;loc_c=j;break;
    case 'U':nu++;loc_u=j;break;
    case 'A':ansa=0;break;
    default:ans=0;break;
   }
  }

 pre=loc_s;
 
 post=strlen(str)-loc_u-1;
if(ns==1&&nc==1&&nu==1&&(loc_s==(loc_c-1))&&(loc_c==(loc_u-1))&&(((ans==1)&& (ansa==1)||(ans==1&&ansa==0&&pre!=0&&post!=0))))
 

	
 	  printf("YES\n");
 


else
   printf("NO\n");
}

}

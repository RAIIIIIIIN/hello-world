#include<stdio.h>
int age(int n,int a,int k);
int main(){
	
	int n;
	int a;
	int k;
	printf("输入摆龙门阵的小伙伴的人数：");
	scanf("%d",&n);
	printf("输入第一号小伙伴的年龄："); 
	scanf("%d",&a);
	printf("输入相邻编号小伙伴的年龄差：");
	scanf("%d",&k);
	

	if(n>=2&&k<=100&&k>0&&a>0)
	  {
	    age(n,a,k);
	    printf("第n号小伙伴的年龄:%d",age(n,a,k));
	   } 
	else
	  printf("Wrong Number");
	return 0;}  
	
	

	
	int age(int n,int a,int k)
	{
		if(n<=1)
		  return a;
		else
		  return k+age(n-1,a,k); 
	}
	  



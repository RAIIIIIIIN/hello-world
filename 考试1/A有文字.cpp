#include<stdio.h>
int age(int n,int a,int k);
int main(){
	
	int n;
	int a;
	int k;
	printf("������������С����������");
	scanf("%d",&n);
	printf("�����һ��С�������䣺"); 
	scanf("%d",&a);
	printf("�������ڱ��С��������");
	scanf("%d",&k);
	

	if(n>=2&&k<=100&&k>0&&a>0)
	  {
	    age(n,a,k);
	    printf("��n��С��������:%d",age(n,a,k));
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
	  



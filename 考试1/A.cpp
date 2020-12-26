#include<stdio.h>
int age(int n,int a,int k);
int main(){
	
	int n;
	int a;
	int k;
	
	scanf("%d",&n);

	scanf("%d",&a);
	
	scanf("%d",&k);
	

	if(n>=2&&k<=100&&k>0&&a>0)
	  {
	    age(n,a,k);
	    printf("%d",age(n,a,k));
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
	  



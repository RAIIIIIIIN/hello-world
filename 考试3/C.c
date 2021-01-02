#include<stdio.h>
int main(){
	int n;
	int i;
	int j;
	int num;
	int a,b;
	scanf("%d",&n);
	if(n%2==0&&n>6){
		for(num=3;num<=n/2;num++){
			for(i=2;i<num;i++){
				if(num%i==0)
				    a++;
			}
			if(a==0){
				for(j=2;j<n-num;j++){
					if((n-num)%j==0)
					  b++;
					  
					 
				}
				if(b==0)
				  printf("%d %d\n",num,n-num);
			}
			
			a=0;
			b=0;
		}
		
		
	}
	else
	  printf("ERROR\n");
	return 0;
	
}

#include<stdio.h>
int main(){
	int a[10];
    int i;
    int aa;
    int bb; 
    int n;
    
    
    for(i=0;i<5;i++){
    	scanf("%d",&a[i]);
    }
    
	while(a[0]!=0||a[1]!=0||a[2]!=0||a[3]!=0||a[4]!=0){
	  
	if(a[2]-a[1]==a[1]-a[0]&&a[3]-a[2]==a[2]-a[1]&&a[4]-a[3]==a[3]-a[2]&&a[1]/a[0]!=a[2]/a[1]){
	   printf("case one\n");
	   aa=a[4];
	   for(i=5;i<10;i++){
		   aa+=(a[2]-a[1]);
		   printf("%d ",aa);
		   }
	}//为等差数列时的情况
	else if(a[1]/a[0]==a[2]/a[1]&&a[2]/a[1]==a[3]/a[2]&&a[3]/a[2]==a[4]/a[3]&&a[2]-a[1]!=a[1]-a[0]){
		printf("case two\n");
		bb=a[4];
		for(i=5;i<10;i++){
			bb*=(a[2]/a[1]);
			printf("%d ",bb);
		}
	} //为等比数列时的情况
	else if (a[0]+a[1]==a[2]&&a[1]+a[2]==a[3]&&a[2]+a[3]==a[4]){
	
	    printf("case three\n");
		for(i=5;i<10;i++){
			a[i]=a[i-1]+a[i-2];
			printf("%d ",a[i]);
		} //为斐波那契数列的情况 
	}
	
	else if(a[2]-a[1]==a[1]-a[0]&&a[3]-a[2]==a[2]-a[1]&&a[4]-a[3]==a[3]-a[2]&&a[1]/a[0]==a[2]/a[1]&&a[2]/a[1]==a[3]/a[2]&&a[3]/a[2]==a[4]/a[3])
    {
    	printf("case one\n");
	   aa=a[4];
	   for(i=5;i<10;i++){
		   aa+=(a[2]-a[1]);
		   printf("%d ",aa);
		   }
		i=5;
		printf("\ncase two\n");
		bb=a[4];
		for(i=5;i<10;i++){
			bb*=(a[2]/a[1]);
			printf("%d ",bb);
		}
	}
	printf("\n");
	i=0;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
	
}

}
    

	


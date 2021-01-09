#include<stdio.h>

int main(){
	
	int t;//表示t组数据
	int i;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
	    int m,n;
	    
	    int u; 
	    
	    int one,two,three;//表示百位数，十位数，个位数 
	    
	    int count=0;
	    
		scanf("%d %d",&m,&n); 
		
		for(u=m;u<=n;u++)
		{
		    one=u/100;
			two=(u/10)%10;
			three=u%10;
			if(one*one*one+two*two*two+three*three*three==u){
		
			    printf("%d ",u);
			    count++;
			    
			    
		    }
		    
		    
		}
		
		if(count==0){
			printf("%d\n",-1);
			
		}
	}
	return 0;   
}  


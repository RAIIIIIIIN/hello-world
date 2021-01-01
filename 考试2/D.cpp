#include<stdio.h>
#include<string.h>


int main(){
	int r=0;
	int c=0;
	int n;
	int i;
	int a[50][50];
	char com[2];
	int p,q;
	
	
	
	int w,z;
	
	

	scanf("%d%d",&r,&c);
	
	for(p=0;p<r;p++){
		for(q=0;q<c;q++){
		
		scanf("%d",&a[p][q]);
		}
		
	}

	
	scanf("%d",&n);
 	for(i=0;i<n;i++){
		scanf("%s",com);
		if(strcmp(com,"SR")==0){
			int x1=0;
			int x2=0;
			scanf("%d%d",&x1,&x2);
			char temp;
	        
	        int j;
	        for(j=0;j<c;j++){
		    temp=a[x1-1][j];
		    a[x1-1][j]=a[x2-1][j];
		    a[x2-1][j]=temp;
		    }
	    }
		
		else if(strcmp(com,"SC")==0){
			int y1=0;
			int y2=0;
			scanf("%d%d",&y1,&y2);
			int i1;

	        char temp;
	        for(i1=0;i1<r;i1++){
		      temp=a[i1][y1-1];
		       a[i1][y1-1]=a[i1][y2-1];
	        	a[i1][y2-1]=temp;
	        }
		}
		
		else if(strcmp(com,"DR")==0){
			
			int x=0;
			scanf("%d",&x);
			
	        int i1,j; 
	        for(i1=x-1;i1<r-1;i1++){
	      	    for(j=0;j<c;j++){
	      		a[i1][j]=a[i1+1][j];
			    } 
		    }
		    r--;
		}
	
		else if(strcmp(com,"DC")==0){
			
			int y=0;
			scanf("%d",&y);
			
         	int i1,j;
         	for(j=y-1;j<c-1;j++){
			
          	    for(i1=0;i1<r;i1++){
		           a[i1][j]=a[i1][j+1]; 
		        }
		  
	        }
	
	        c--;
        }   
		else if(strcmp(com,"IR")==0){
			int u=0;
			scanf("%d",&u);
			int i1,j;
		
	    
	        for(j=0;j<c;j++) {
		        for(i1=r;i1>u-1;i1--){
			      a[i1][j]=a[i1-1][j];	
		        }
		        while(i1==u-1){
			        a[i1][j]=0;
			        break;
	            }
	        }
	        r++;
		}
		
		else if(strcmp(com,"IC")==0){
			int v=0;
			scanf("%d",&v);
	
			
	        int i1,j;
	        for(i1=0;i1<r;i1++){
		         for(j=c;j>v-1;j--){
			     a[i1][j]=a[i1][j-1];
			
		         }
		         while(j==v-1){
			         a[i1][j]=0;
			         break;
		         }
	        }
	        c++;
		}
		
		
		
	}
	
	for(w=0;w<r;w++){
		for(z=0;z<c;z++){
			printf("%d ",a[w][z]);
			
		}
		printf("\n");
	}
	
	return 0;
}

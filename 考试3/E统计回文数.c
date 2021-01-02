
#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
#define N 500
int zuidazhi(int*temp){
      int j;int k=temp[0];int i;
      for( i=0;i<N;i++){
      	if(k<temp[i]){
      		k=temp[i];j=i;
		  }
	  }
	  return j;
}
int*huiwen(char**b){
	int i=0;
	int j;
	int*c;
	c=(int*)malloc(sizeof(int)*N);
	for(i=0;i<N;i++) 
	c[i]=0;
	for( i=0;b[i]!=0;i++){
		if(b[i][0]=='0')
		b[i]="*";
	}
	for( j=0;b[i]!=0;j++){//从一个开始搜寻。 
		if((b[i][j]==b[i][strlen(b[i])-1-j])&&(b[i][j]>='0'&&b[i][j]<='9')&&(b[i][strlen(b[i])-1-j]>='0'&&b[i][strlen(b[i])-1-j]<='9')){
			if(j<strlen(b[i])-1-j)
			continue;
			if(j>=strlen(b[i])-1-j){
				c[i]=1;
				j=-1;i++;
			    continue;
			}
		}
	  else{
	   	       c[i]=0;
	   	       j=-1;i++;
	   	       continue ;
	   }
	}
	return c;
	
} //回文已经ok 
char**num(char*a){
	char **b;int i=0;int k=0;int j=0;
	b=(char**)malloc(sizeof(char*)*N);
	for(int i=0;i<N;i++)
	b[i]=(char*)malloc(sizeof(char)*N);
	for( j=0;a[j]!=0;j++){
		if((a[j]>='0'&&a[j]<='9')&&(a[j+1]>='0'&&a[j+1]<='9')){
		b[i][k]=a[j]; k++;
		continue;
	}
	  else  if((a[j-1]>='0'&&a[j-1]<='9')&&(a[j]>='0'&&a[j]<='9')&&(a[j+1]<'0'||a[j+1]>'9')){
	    b[i][k]=a[j]; 
	    b[i][k+1]=0;
	    k=0; i++;
	    continue;
		}
	}
	return b;
}//这个函数ok 
int main(){
	char a[N];int temp[N]={0}; 
	int i=0;
	while((a[i]=getchar())!=EOF)
	i++;
	a[i]=0;
	char**b=num(a);//那一堆数字 
	//			printf("最先提取数字 c[i]\n"); 
//	for(int i=0;i<200;i++)
//	printf("%s ",b[i]);
//	printf("\n\n");

	int*c=huiwen(b);//b[i]中是回文数c[i]就是1
//	printf("是回文的为1 c[i]\n"); 
//	for(int i=0;i<200;i++)
//	printf("%d ",c[i]);
//	printf("\n\n");
	
	for( i=0;i<N;i++){
		if(c[i]==1){//表示是回文数 
			temp[i]=1;
		}
	 //先拿回文的都加一； 
		}
//	printf("cu态temp\n"); 
	//for(int i=0;i<200;i++)
//	printf("%d  ",temp[i]);
//	printf("\n\n");


	for( i=0;i<N;i++){
	for(int j=i+1;j<N;j++){
			if(c[i]==1){
			if(strcmp(b[i],b[j])==0){
			temp[i]++; 
			} 
			} 
		} 
	}//没问题
	//	printf("末态temp\n"); 
//	for(int i=0;i<200;i++)
//	printf("%d  ",temp[i]);
//	printf("\n\n");
///以上都没问题 
	for(int i=0;i<N;i++){
		if(temp[i]==0){
			if(i==N-1){
				printf("None\n");return 0;
			}
			else
			continue;
		}
		else break;
	}//检查函数 

  int j=zuidazhi(temp);
  char **d;
  d=(char**)malloc(sizeof(char*)*N);
  for(int i=0;i<N;i++)
  d[i]=(char*)malloc(sizeof(char)*N);
  
  int l=0;char e[N];
  
   for(int i=0;i<N;i++){
  	if(temp[i]==temp[j]){//j代表最大的 
  		strcpy(d[l],b[i]);
  		l++;
	}
	  }
	  strcpy(e,d[0]);
	  for(int i=0;i<N;i++){
	  	for(int j=i;j<N;j++){
	  	if((strlen(d[i])>strlen(d[j]))||(strlen(d[i])==strlen(d[j]))&&(strcmp(d[i],d[j])==1)){
              strcpy(e,d[i]);	  		
			  strcpy(d[i],d[j]);
	  		  strcpy(d[j],e);
	  	}
		  }
	  }
	  for(int i=0;i<N;i++){
	  	if(d[i][0]>'0')
	  	printf("%s %d\n",d[i],temp[j]);
	  }
  }


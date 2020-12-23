#include<stdio.h>
int main(){
	int i,F[40]={0,1};
	printf("0 1 "); 
	
	for(i=2;i<40;i++){
	
	  F[i]=F[i-2]+F[i-1];
	printf("%d ",F[i]);}
	return 0;
	  
	}

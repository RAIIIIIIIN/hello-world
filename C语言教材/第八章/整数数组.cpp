#include<stdio.h>
int main(){
	int a[5][5];
	int row[5];
	int column[5];
	int i ,j;
	int sum; 
	
	
	for(i=0;i<5;i++){
		printf("Enter row %d: ",i+1);
		for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);}

	
 
	  
	printf("Row totals: "); 
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		sum+=a[i][j];
		row[i]=sum;
		printf("%3d",row[i]);
		sum=0;
	}
	
	printf("\nColumn totals: ");
	for(j=0;j<5;j++){
		for(i=0;i<5;i++)
		sum+=a[i][j];
		column[j]=sum;
		printf("%3d",column[j]);
		sum=0;
	}
	return 0;
}

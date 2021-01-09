#include<stdio.h>
#include<stdlib.h>
int comp(const void*a,const void*b);
int main(){
	int m,n;//分别代表数组a和数组b的长度
	
	
	int ab[200];
	int i;
	scanf("%d %d",&m,&n);
	for(i=0;i<m+n;i++)
    scanf("%d",&ab[i]);
    qsort(ab,m+n,sizeof(int),comp);
    for(i=0;i<m+n;i++)
	printf("%d ",ab[i]); 
	return 0;
}
int comp(const void*a,const void*b)
{
return *(int*)a-*(int*)b;
}

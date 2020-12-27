#include <stdio.h>
void comb(int a[], int b[], int f, int n) {
	int k; 
	if (f == n) 
	{
		printf("--> ");
		for ( k = 0; k < n; k++)
		{
			if (b[k]) 
			{
				printf("%d ", a[k]);
			}
		}
		printf("\n");
		return;
	}
 
	b[f] = 1;
	comb(a, b, f + 1, n);
	b[f] = 0;
	comb(a, b, f + 1, n);
}
 
int main() {
	int m;
	int i;
	scanf("%d", &m);
	
	for ( i = 0; i < m; i++) 
	{
		int n;
		int b[1000];
		int a[1000];
        int j;
		scanf("%d", &n);
		for ( j = 0; j < n; j++) 
		{
			scanf("%d", &a[j]);
		}	
		comb(a, b, 0, n);
	}
	
	return 0;
}

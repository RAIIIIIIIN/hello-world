#include<stdio.h>

int main(){
	char a[20][31];
	int m;
	int i,j;
	int row;
	int num[20];
	char sign[20];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%c",&num[i],&sign[i]);
		
		
	}
	int up=0;
	int down=0;
	for(i=0;i<m;i++)
	{
		if (num[i]>0&&up<num[i])
		   up=num[i];//算出向上的行数 
		else if(num[i]<=0&&down>num[i])
		   down=num[i];//算出向下的行数 
		   
	}
	row=up-down+1;//总行数 
	for(j=0;j<m;j++)
	{
		if(num[j]>0){
		
		for(i=0;i<row;i++)
		{
			if(i<up-num[j])
			    a[i][j]=' ';
			else if(i>=up-num[j]&&i<up)
			{
				if (sign[j]==' '||sign[j]=='\n')
				   a[i][j]='+';
				else
				   a[i][j]=sign[j];
			}
			else if(i==up)
			    a[i][j]='-';
			else
			    a[i][j]=' ';
		}
	    }
	    
	    else{
	    	for(i=0;i<row;i++)
			{
				if(i<up)
				    a[i][j]=' ';
				else if(i==up)
				    a[i][j]='-';
				else if(i>up&&i<=up-num[j])
				{
					if(sign[j]==' '||sign[j]=='\n')
						a[i][j]='+';
					else 
					    a[i][j]=sign[j];
				}
				else
				    a[i][j]=' ';
			}
		}
	}
	
	for(i=0;i<row;i++)
	{
		if(i==up){
			for(j=0;j<m;j++)
			{
				if(j==m-1)
				   printf("%c",a[i][j]);
				else
				   printf("%c-",a[i][j]);
			}
		}
		else{
			for(j=0;j<m;j++){
				printf("%c ",a[i][j]);
			}
		}
		printf("\n");
    
	}
    return 0;
}

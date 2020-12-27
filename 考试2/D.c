#include<stdio.h>
#include<string.h>
void exchange(int x1,int x2);
void exchange_column(int y1,int y2);
void clear(int i);
void clear_column(int j);
void insert_row(int row);
void insert_column(int column);

int main(){
	int r,c;
	int n;
	int i;
	int a[50][50];
	char com[2];
	int p,q;
	int x1,x2;
	int y1,y2;
	int x,y;
	int u,v;
	int w,z;

	scanf("%d%d",&r,&c);
	
	for(p=0;p<r;p++){
		for(q=0;q<c;q++){
		
		scanf("%d",&a[p][q]);}
		
		}

	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",com);
		if(strcmp(com,"SR")==0){
			scanf("%d%d",&x1,&x2);
			exchange(x1,x2);
		}
		
		else if(strcmp(com,"SC")==0){
			scanf("%d%d",&y1,&y2);
			exchange_column(y1,y2);
		}
		
		else if(strcmp(com,"DR")==0){
			scanf("%d",&y);
			clear(y);
		}
		
		else if(strcmp(com,"DC")==0){
			scanf("%d",&x);
			clear(x); 
		}
		
		else if(strcmp(com,"IR")==0){
			scanf("%d",&u);
			insert_row(u);
		}
		
		else if(strcmp(com,"IC")==0){
			scanf("%d",&v);
			insert_column(v);
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

void exchange(int x1,int x2){
	char temp;
	int str[50][50];
	int j;
	for(j=0;j<50;j++){
		temp=str[x1-1][j];
		str[x1-1][j]=str[x2-1][j];
		str[x2-1][j]=temp;
	}
	
	
}
void exchange_column(int y1,int y2){
	int i;
	int str[50][50];
	char temp;
	for(i=0;i<50;i++){
		temp=str[i][y1];
		str[i][y1]=str[i][y2];
		str[i][y2]=temp;
	}
}
void clear(int i){
	int str[50][50];
	int j=0;
	for(j=0;j<50;j++){
		str[i][j]='\0';
	}
}
void clear_column(int j){
	int str[50][50];
	int i;
	for(i=0;i<50;i++){
		str[i][j]='\0';
	}
}
void insert_row(int row){      //row代表要删除的行号 
	int i,j;
	int str[50][50];
	for(j=0;j<50;j++) {
		for(i=50;i>row;i--){
			str[i][j]=str[i-1][j];	
		}
		while(i=row){
			str[i][j]='0';
		}
	}
}
void insert_column(int column){
	int str[50][50];
	int i,j;
	for(i=0;i<50;i++){
		for(j=50;j>column;j--){
			str[i][j]=str[i][j-1];
			
		}
		while(j=column){
			str[i][j]='0';
		}
	}
}


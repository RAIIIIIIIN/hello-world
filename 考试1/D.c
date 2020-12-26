#include<stdio.h>
int main(){
	int n;
	int i;
	char name;
	char id;
	int score;
	int max;
	int min;
	char name_max;
	char name_min;
	char id_max;
	char id_min;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%s %s %d",name,id,&score);
		
		if(i==0){
			max=score;
			min=score;
			name_max=name;
			sprintf(name_min,"%s",name);
			sprintf(id_max,"%s",id);
			sprintf(id_min,"%s",id);
		}
		if(max<score){
			max=score;
			sprintf(name_max,"%s",name);
			sprintf(id_max,"%s",id);
		}
		if(min>score){
			min=score;
			sprintf(name_min,"%s",name);
			sprintf(id_min,"%s",id);
		}
		
		
	}
	printf("%s %s %d",name_max,id_max,score);
	printf("%s %S %d",name_min,id_min,score);
	
	return 0;
	
	
}

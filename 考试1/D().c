#include <stdio.h>
int main()
{
    int i;
	int n=0;
	
    int score =0;
    int score_high = 0;
    int score_low = 101;
    char name [10]={0};
    char name_low [10]={0};
    char name_low1[10]={0};
    char name_high [10]={0};
    char name_high1[10]={0};
    char id [20]={0};
    char id_low [20]={0};
    char id_low1[20]={0};
    char id_high [20]={0};
    char id_high1[20]={0};
    int u,v,w,x;
    int y,z,p,q;
    int y1,z1,p1,q1;
    
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        scanf("%s %s %d",&name,&id,&score);
        
        if(score > score_high )
        {    score_high = score ;
             for (u=0;u<10;u++){
             	name_high[u]=name[u];
			 } 
			 for(v=0;v<20;v++){
			 	id_high[v]=id[v];
			 }
           
        }
        else if(score = score_high){
        	  for (y=0;y<10;y++){
             	name_high1[y]=name[y];
			 } 
			 for(z=0;z<20;z++){
			 	id_high1[z]=id[z];
			 } 
			 while(name_high1[0]<name_high[0]){
			 	for (y1=0;y1<10;y1++){
             	name_high[y1]=name_high1[y1];
			 } 
			 for(z1=0;z1<20;z1++){
			 	id_high[z1]=id_high1[z1];
			 }
        	}
        }
        	
        if(score < score_low )
        {
            score_low = score;
            for(w=0;w<10;w++){
            	name_low[w]=name[w];
			}
            for(x=0;x<20;x++){
            	id_low[x]=id[x]; 
			}
        }
        else if(score = score_low){
        	  for (p=0;p<10;p++){
             	name_low1[p]=name[p];
			 } 
			 for(q=0;q<20;q++){
			 	id_low1[q]=id[q];
			 } 
			 while(name_low1[0]>name_low[0]){
			 	for (p1=0;p1<10;p1++){
             	name_low[p1]=name_low1[p1];
			 } 
			 for(q1=0;q1<20;q1++){
			 	id_low[q1]=id_low1[q1];
			 }
        	}
        
       }
   }
   
    while(score==0){
    	printf("至少有一位学生有成绩");break; 
	}

    printf("%s %s\n",name_high,id_high);
    printf("%s %s\n",name_low,id_low);

    return 0;

}

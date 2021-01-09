#include <stdio.h>

int main() {

    int n, i;

    scanf("%d", &n);  // 有n组数据

    for (i = 0; i < n; i++) {

        int a, b, c, d;

        int temp;
        
        scanf("%d %d %d %d",&a,&b,&c,&d);
        
		if(a>b){
        	temp=a;
        	a=b;
        	b=temp;
        }
        if(c>d){
        	temp=c;
        	c=d;
        	d=temp;
		}
		if(a>c){
			temp=a;
			a=c;
			c=temp;
		}
		if(b>d){
			temp=b;
			b=d;
			d=temp;
		}
		if(b>c){
			temp=b;
			b=c;
			c=temp;
		}
		
		
		printf("%d %d %d %d\n",a,b,c,d);

        // 读入4个整数，对这4个整数排序，并输出结果

        // 请将排序代码写在这里，不能使用循环语句

    }

   

    return 0;

}

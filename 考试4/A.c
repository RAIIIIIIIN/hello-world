#include <stdio.h>

int main() {

    int n, i;

    scanf("%d", &n);  // ��n������

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

        // ����4������������4���������򣬲�������

        // �뽫�������д���������ʹ��ѭ�����

    }

   

    return 0;

}



#include <stdio.h>
int main(void){
	int m=0,n=0,temp=0;
	int numerator=0,denominator=0;
	printf ("enter a fraction : ");
	scanf ("%d/%d",&m,&n);
	
	if(n==0){
		printf("illegal fraction");
		return 0;
	}//�����ڴ˷�������� 
	
	numerator=m;
	denominator=n; 
	while(n!=0){
		temp=n;
		n=m%n;
		m=temp;		
	}//��������Լ�� 
	numerator=numerator/m;
	denominator=denominator/m;
	printf("in lowest terms : %d/%d",numerator,denominator); 
	return 0;
}

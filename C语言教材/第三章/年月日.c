//��������ĸ�ʽ�����û�¼���������Ϣ�����������µĸ�ʽ������ʾ���� 
#include<stdio.h>
int main(){
	int m ,d ,y;
	printf("Enter a date(mm/dd/yy):");
	scanf("%d/%d/%d",&m,&d,&y);
	printf("You entered the date %d%2.2d%d\n",y,m,d);/*%2.2��ʾ����ռ����
	�ռ��ұ�֤����λ����*/ 
	return 0 ;
	
}

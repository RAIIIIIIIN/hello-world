#include<stdio.h>
#include<stdlib.h>//Ϊ�˶�̬�����ڴ�
#include<string.h>//Ϊ��ʹ��strlen();
#define MAX_LEN 200
int main(void)
{
    char inputA[MAX_LEN + 1];//���ڴ����������� +1 ����\0'��λ��
    char inputB[MAX_LEN + 1];
    int i,j;//ѭ����������ΪOJ�������汾���⣬û�취��ѭ����ֱ�Ӷ���ѭ������
    scanf("%s%s",inputA,inputB);
    int lenA = strlen(inputA);
    int lenB = strlen(inputB);
    int maxLen = lenA + lenB;//���Ľ��λ��
    int* arrayA = (int*)malloc(sizeof(int) * lenA);
    int* arrayB = (int*)malloc(sizeof(int) * lenB);
    int* result = (int*)malloc(sizeof(int) * maxLen);

    for(i = 0; i < lenA; i++){//����ת��
        arrayA[i] = inputA[lenA - 1 -i] - '0';
    }

    for(i = 0; i < lenB; i++){//����ת��
        arrayB[i] = inputB[lenB - 1 -i] - '0';
    }
    
    for(i = 0; i < lenA; i++){//ģ�����Ĺ���
        for(j = 0; j < lenB; j++){
            result[i+j] += arrayA[i] * arrayB[j];//ˢ��ÿһ�����λ�ϵĽ��
            result[i+j+i] += (result[i+j]) / 10;//�����λ��
            result[i+j] = result[i+j] % 10;//��λ��ԭλ����Ҫʹ��+=
        }
    }
      while(maxLen - 1 > 0 && result[maxLen - 1] == 0){//ȥ��ǰ��0
        maxLen--;
    }

    for(i = maxLen - 1; i >=0; i--){//������
        printf("%d",result[i]);
    }

    return 0;
}


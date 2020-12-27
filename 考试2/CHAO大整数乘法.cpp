#include<stdio.h>
#include<stdlib.h>//为了动态分配内存
#include<string.h>//为了使用strlen();
#define MAX_LEN 200
int main(void)
{
    char inputA[MAX_LEN + 1];//用于存放输入的数据 +1 给‘\0'留位置
    char inputB[MAX_LEN + 1];
    int i,j;//循环变量，因为OJ编译器版本问题，没办法在循环中直接定义循环变量
    scanf("%s%s",inputA,inputB);
    int lenA = strlen(inputA);
    int lenB = strlen(inputB);
    int maxLen = lenA + lenB;//最大的结果位数
    int* arrayA = (int*)malloc(sizeof(int) * lenA);
    int* arrayB = (int*)malloc(sizeof(int) * lenB);
    int* result = (int*)malloc(sizeof(int) * maxLen);

    for(i = 0; i < lenA; i++){//倒序并转换
        arrayA[i] = inputA[lenA - 1 -i] - '0';
    }

    for(i = 0; i < lenB; i++){//倒序并转换
        arrayB[i] = inputB[lenB - 1 -i] - '0';
    }
    
    for(i = 0; i < lenA; i++){//模拟计算的过程
        for(j = 0; j < lenB; j++){
            result[i+j] += arrayA[i] * arrayB[j];//刷新每一个结果位上的结果
            result[i+j+i] += (result[i+j]) / 10;//求出进位数
            result[i+j] = result[i+j] % 10;//进位后原位不需要使用+=
        }
    }
      while(maxLen - 1 > 0 && result[maxLen - 1] == 0){//去除前导0
        maxLen--;
    }

    for(i = maxLen - 1; i >=0; i--){//输出结果
        printf("%d",result[i]);
    }

    return 0;
}


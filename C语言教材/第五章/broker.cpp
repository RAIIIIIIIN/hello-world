/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
  float commission, price,value,commission1;
  int sum;

  printf("请输入股票的数量: ");
  scanf("%d", &sum);
  printf("每股的价格:");
  scanf("%f",&price);
  value+sum*price;
  if (value < 2500.00f)
    commission = 30.00f + .017f * value;
  else if (value < 6250.00f)
    commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + .0011f * value;
  else
    commission = 255.00f + .0009f * value;
    
    
  if(commission<39.00f)
    commission =39.00f;
  printf("经纪人佣金:$%.2f\n",commission);
  
  
  if(sum<2000)
   commission1=sum*33.03f;
  else
    commission1=sum*33.02f;
  printf("经纪人对手佣金：$%.2f\n",commission1);
  
  return 0;
}
   
   

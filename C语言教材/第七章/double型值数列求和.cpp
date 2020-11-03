/* Sums a series of numbers (using long variables) */

#include <stdio.h>

int main(void)
{
  double n, sum = 0;

  printf("This program sums a series of double.\n");
  printf("Enter double (0 to terminate): ");

  scanf("%f", &n);
  while (n != 0) {
    sum += n;
    scanf("%f", &n);
  }
  printf("The sum is: %f\n", sum);

  return 0;
}

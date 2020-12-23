#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
int main(void)
{
 char a[10][10];
 int i, j;
 generate_random_walk(a);
 for (i = 0; i < 10; i++)
 {
  for (j = 0; j < 10; j++)
  {
   printf("%c  ", a[i][j]);
  
  }
  printf("\n");
 }

 printf("\n");
 printf("\n");

 print_array(a);
 return 0;
}

void generate_random_walk(char walk[10][10])
{
 int i, j;
 for (i = 0; i < 10; i++)
     for (j = 0; j < 10; j++)
           walk[i][j] = '.';
}

void print_array(char walk[10][10])
{
 srand((unsigned)time(NULL));
 char walker = 'A';
 int tmp,i=0,j=0;
 walk[i][j] = walker;
 walker++;
 for (;;)
 {
  tmp = rand() % 4;
  if (tmp == 0 && walker<='Z')
  {
   if (i >= 1 && walk[i - 1][j] == '.')
   {
    walk[i - 1][j] = walker;
    walker++;
    i = i - 1;
   }
   else if (i < 9 && walk[i + 1][j] == '.')
   {
    walk[i + 1][j] = walker;
    walker++;
    i = i + 1;
   }
   else if (j > 0 && walk[i][j - 1] == '.')
   {
    walk[i][j - 1] = walker;
    walker++;
    j = j - 1;
   }
   else if (j < 9 && walk[i][j + 1] == '.')
   {
    walk[i][j + 1] = walker;
    walker++;
    j = j + 1;
   }
   else
    break;
  }
  else if (tmp == 1 && walker <= 'Z')
  {
   if (i < 9 && walk[i + 1][j] == '.')
   {
    walk[i + 1][j] = walker;
    walker++;
    i = i + 1;
   }
   else if (j > 0 && walk[i][j - 1] == '.')
   {
    walk[i][j - 1] = walker++;
    j--;
   }
   else if (j < 9 && walk[i][j + 1] == '.')
   {
    walk[i][j + 1] = walker++;
    j++;
   }
   else if (i > 0 && walk[i - 1][j] == '.')
   {
    walk[i - 1][j] = walker++;
    i--;
   }
   
   else
    break;
  }
  else if (tmp == 2 && walker <= 'Z')
  {
   if (j > 0 && walk[i][j - 1] == '.')
   {
    walk[i][j - 1] = walker;
    walker++;
    j = j - 1;
   }
   else if (j < 9 && walk[i][j + 1] == '.')
   {
    walk[i][j + 1] = walker++;
    j++;
   }
   else if (i > 0 && walk[i - 1][j] == '.')
   {
    walk[i - 1][j] = walker++;
    i--;
   }
   else if (i < 9 && walk[i + 1][j] == '.')
   {
    walk[i + 1][j] = walker++;
    i++;
   }
   else
    break;
  }
  else if (tmp == 3 && walker <= 'Z')
  {
   if (j < 9 && walk[i][j + 1] == '.')
   {
    walk[i][j + 1] = walker;
    walker++;
    j = j + 1;
   }
   else if (j > 0 && walk[i][j - 1] == '.')
   {
    walk[i][j - 1] = walker++;
    j--;
   }
   
   else if (i < 9 && walk[i + 1][j] == '.')
   {
    walk[i + 1][j] = walker++;
    i++;
   }
   else if (i > 0 && walk[i - 1][j] == '.')
   {
    walk[i - 1][j] = walker++;
    i--;
   }
   else
    break;
  }
  else
   break;
  
 }
 for (i = 0; i < 10; i++)
 {
  for (j = 0; j < 10; j++)
  {
   printf("%c  ", walk[i][j]);
  }
  printf("\n");
 } 
}

/* Prints a date in legal form */

#include <stdio.h>

int main(void)
{
  int month, day,  year, week;

  printf("Enter date (mm/dd/yy): ");
  scanf("%d/%d/%2d", &month, &day, &year);

  printf("Dated this %d", day);
  switch (day) {
    case 1: case 21: case 31:
      printf("st"); break;
    case 2: case 22:
      printf("nd"); break;
    case 3: case 23:
      printf("rd"); break;
    default: printf("th"); break;
  }
  printf(" day of ");
  switch (month) {
    case 1:  printf("January");   break;
    case 2:  printf("February");  break;
    case 3:  printf("March");     break;
    case 4:  printf("April");     break;
    case 5:  printf("May");       break;
    case 6:  printf("June");      break;
    case 7:  printf("July");      break;
    case 8:  printf("August");    break;
    case 9:  printf("September"); break;
    case 10: printf("October");   break;
    case 11: printf("November");  break;
    case 12: printf("December");  break;
  }

  printf(", 20%.2d, ", year);
  
  if (month>=3&&month<=12)
    week=year+year/4+13*(month+1)/5+day-36;
  else
    week=year+year/4+13*(month+13)/5+day-36;
    
    
 if(week>0)
   week=week%7;
 else{

   week+=7;
   week%=7;
}

  switch(week){
  	case 1:printf("Monday.");break;
  	case 2:printf("Tuesday.");break;
  	case 3:printf("Wednesday.");break;
  	case 4:printf("Thurday.");break;
  	case 5:printf("Friday.");break;
  	case 6:printf("Saturday.");break;
  	case 0:printf("Sunday.");break;
  }
  
  return 0;
}


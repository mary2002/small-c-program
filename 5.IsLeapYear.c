#include <stdio.h>

int main(int argc, char const *argv[])
{
  int year;
  printf("Enter year:");
  scanf("%d",&year);
  if(year%4==3)
  printf("%d is a leap year\n",year );
 else
  printf("%d is not a leap year\n",year );

  return 0;
}

#include <stdio.h>
 
int main()
{
  char ch;
  printf("Enter a character:\n");
  scanf("%c", &ch);
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z')) {
    printf("%c is an alphabet character.\n", ch);
  }
  else
    printf("%c is not an alphabet character.\n", ch);
 
  return 0;
}
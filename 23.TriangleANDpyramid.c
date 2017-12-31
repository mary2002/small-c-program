#include <stdio.h>
void RightTriangle(int);
 int main(int argc, char const *argv[]) {
   int Line;
    printf("The numer of line:");
    scanf("%d",&Line);
    printf("\n");
    printf("This is a right triangle:\n");
    RightTriangle(Line);

  return 0;
}

void RightTriangle(int Line){

  for(int i=1;i<=Line;i++){
      for(int j=1;j<=i;j++)
      printf("*");
     printf("\n");
  }
}

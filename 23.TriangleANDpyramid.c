#include <stdio.h>
void RightTriangle(int);
void EquilateralTriangle(int);
void Triangle(int);
void Pyramid(int);
 int main(int argc, char const *argv[]) {
   int Line;
    printf("The numer of line:");
    scanf("%d",&Line);
    printf("\n");
    printf("This is a right triangle:\n");
    RightTriangle(Line);
    printf("\n");
    printf("This is an equilateral triangle:\n");
    printf("\n");
    EquilateralTriangle(Line);
    printf("\n");
    printf("This is a simple triangle:\n");
    printf("\n");
    Triangle(Line);
    printf("\n");
    printf("This is a pyramid\n");
    printf("\n");
    Pyramid(Line);
    printf("\n");

  return 0;
}

void RightTriangle(int Line){

  for(int i=1;i<=Line;i++){
      for(int j=1;j<=i;j++)
      printf("*");
     printf("\n");
  }
}
void EquilateralTriangle(int Line){
  for(int i=0;i<=Line;i++)
  {
   for(int j=Line;j>i;j--)
    printf(" ");
   for(int k=1;k<2*i;k++)
    printf("*");
   printf("\n");
  }
}
void Triangle(int Line){

  for(int i=0;i<=Line;i++)
  {
   for(int j=Line;j>i;j--)
    printf(" ");
   for(int j=0;j<i;j++)
    printf("* ");
   printf("\n");
  }
}

void Pyramid(int Line){
  int k=0;
     for(int i=1; i<=Line; ++i, k=0)
     {
         for(int j=1; j<=Line-i; ++j)
         {
             printf("  ");
         }

         while(k != 2*i-1)
         {
             printf("* ");
             ++k;
         }

         printf("\n");
     }

}

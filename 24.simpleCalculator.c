#include <stdio.h>
 int main(int argc, char const *argv[]) {
   float num1,num2,result=0;
    char ch;
    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);
    printf("Choose operation to perform (+,-,*,/): ");
    scanf(" %c",&ch);

    switch(ch)
    {
        case '+':
            result=num1+num2;
            break;

        case '-':
            result=num1-num2;
            break;

        case '*':
            result=num1*num2;
            break;

        case '/':
            result=num1/num2;
            break;

        default:
            printf("Invalid operation.\n");
    }

    printf("Result:%f%c%f=%f\n",num1,ch,num2,result);
  return 0;
}

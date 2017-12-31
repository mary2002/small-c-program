#include <stdio.h>
int main(int argc, char const *argv[])
{
	float num;
	printf("Enter a number:");
	scanf("%f",&num);
	if(num>0)
		printf("The number is positive\n");
	else if(num<0)
		printf("The number is negative\n");
	else if(num==0)
		printf("The number is zero\n");
	return 0;
}
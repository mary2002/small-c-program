#include <stdio.h>


int main(int argc, char const *argv[])
{
	int number,c=0;
	printf("Enter a number:");
	scanf("%d",&number);
	while(number>0){
		number=number/10;
		c++;
	}
	printf("The number of digits :%d\n",c);
	return 0;
}
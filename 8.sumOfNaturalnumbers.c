#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	 int number,sum=0;
	 printf("Enter a natural number:");
	scanf("%d",&number);
	for (int i = 1; i <= number; ++i)
	{
		sum+=i;
	}
	printf("sum is:%d\n",sum );
	return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x;
	printf("Enter number:");
	scanf("%d",&x);
	if(x%2==0)
		printf("This number is even\n");
	else
		printf("This number is odd\n");
	return 0;
}

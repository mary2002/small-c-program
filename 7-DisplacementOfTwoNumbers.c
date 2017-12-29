#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("first number:%d and second number:%d\n",a,b);
    a=a+b;
	b=a-b;
	a=a-b;
	printf("After displacement,first number:%d and second number:%d\n",a,b);
	return 0;
}

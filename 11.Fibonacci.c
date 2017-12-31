#include <stdio.h>
int Fibonacci(int n);

int main(int argc, char const *argv[])
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	for (int i = 0; i < num; ++i)
	{
	printf("%d,",Fibonacci(i));
	}
	printf("...\n");
	
	return 0;
}
int Fibonacci(int n){
	int a=0;
	int b=1;
	for (int i = 0; i < n; ++i)
	{
		int temp=a;
		a=b;
		b=temp+b;
	}
	return a;
}
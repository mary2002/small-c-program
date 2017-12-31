#include <stdio.h>
int Fibonacci(int n);

int main(int argc, char const *argv[])
{
	
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
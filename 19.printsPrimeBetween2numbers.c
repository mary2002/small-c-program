#include <stdio.h>
#include <stdbool.h>
bool isPrime(int);
int main(int argc, char const *argv[])
{
	int num1,num2;
	printf("Enter tow numbers:");
	scanf("%d%d",&num1,&num2);
	for (int i = num1+1; i < num2; ++i)
	{
		if (isPrime(i))
			printf("%d ",i);
	}
	return 0;
}
bool isPrime(int num){
	bool is_prime=true;
	for (int i = 2; i < num; ++i)
	{
		if(num%i==0)
			is_prime=false;
	}
	return is_prime;
}
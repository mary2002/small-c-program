#include <stdio.h>
#include <stdbool.h>
bool isPrime(int);
int main(int argc, char const *argv[])
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if (isPrime(num))
        printf("%d is a prime. \n", num);
    else
        printf("%d is not a prime. \n", num);
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
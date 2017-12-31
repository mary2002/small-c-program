#include <stdio.h>
int revers(int);
int main(int argc, char const *argv[])
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if (num == revers(num))
        printf("%d is a palindrome. \n", num);
    else
        printf("%d is not a palindrome. \n", num);
	return 0;
}
int revers(int num){
	int rev=0;
	while(num!=0)
	{
		rev=(10*rev)+(num%10);
		num/=10;
	}
	return rev;
}
#include <stdio.h>
int cubeSumOFdigits(int);
int main(int argc, char const *argv[])
{
	int num1,num2;
	printf("Enter tow numbers:");
	scanf("%d%d",&num1,&num2);
	for (int i = num1+1; i < num2; ++i)
	{
		if (i == cubeSumOFdigits(i))
			printf("%d ",i);
	}

	return 0;
}
int cubeSumOFdigits(int num){
	int sum=0,a;
	while(num>0){
		a=num%10;
		num=num/10;
		sum=sum+(a*a*a);
	}
	return sum;
}

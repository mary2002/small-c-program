#include <stdio.h>
int cubeSumOFdigits(int);
int main(int argc, char const *argv[])
{

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

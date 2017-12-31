#include <stdio.h>
int gcd(int,int);
int main(int argc, char const *argv[])
{
	return 0;
}
int gcd(int a,int b){
	if(b==0)
		return a;
	return gcd(b,a%b) ;
}

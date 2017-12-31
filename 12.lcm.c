#include <stdio.h>
int gcd(int,int);
int lcm(int,int);
int main(int argc, char const *argv[])
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("lcm=%d\n",lcm(a,b));
	return 0;
}
int gcd(int a,int b){
	if(b==0)
		return a;
	return gcd(b,a%b) ;
}
int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}

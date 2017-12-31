#include <stdio.h>
int gcd(int,int);
int main(int argc, char const *argv[])
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("gcd=%d\n",gcd(a,b));
	return 0;
}
int gcd(int a,int b){
	if(b==0)
		return a;
	return gcd(b,a%b) ;
}

#include <stdio.h>
int fact(int);

int main(int argc, char const *argv[])
{
	int x;
	printf("Enter a numbers:");
	scanf("%d",&x);
	printf("%d!=%d\n",x,fact(x));
	return 0;
}
int fact(int a){
	int f=1;
	for (int i = 1; i <= a; ++i)
	{
		f=f*i;
	}
	return f;
}

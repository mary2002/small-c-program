#include <stdio.h>
int outside(int,int);
int remaining(int,int);
int main(int argc, char const *argv[])
{
	int x,y;
	printf("Enter two numbers(the second numbers can't be zero):");
	scanf("%d%d",&x,&y);
	printf("outside:%d\n",outside(x,y));
	printf("remaining:%d\n",remaining(x,y));
	return 0;
}
int outside(int a, int b){
	return a/b;
}
int remaining(int a, int b){
	return a%b;
}
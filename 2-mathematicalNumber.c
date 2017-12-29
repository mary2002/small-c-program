#include <stdio.h>
float sum(float,float);
float sub(float,float);
float multi(float,float);
int main(int argc, char const *argv[])
{
	float x,y;
	printf("Enter two numbers(the second numbers can't be zero):");
	scanf("%f%f",&x,&y);
	printf("first number:%f and second number:%f\n",x,y);
	printf("sum:%f\n",sum(x,y));
	printf("Subtraction:%f\n",sub(x,y));
	printf("Multiplication:%f\n",multi(x,y));
	return 0;
}
float sum(float a, float b){
	return a+b;
}
float sub(float a, float b){
	return a-b;
}
float multi(float a, float b){
	return a*b;
}
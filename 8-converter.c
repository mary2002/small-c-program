#include <stdio.h>
float poundTOkg(float);

int main(int argc, char const *argv[])
{
	float x;
	printf("Enter a pound to convert to kilogram:");
	scanf("%f",&x);
	printf("kilogram:%f\n",poundTOkg(x));
	return 0;
}
float poundTOkg(float a){
	return a*0.453592;
}

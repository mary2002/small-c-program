#include <stdio.h>
float poundTOkg(float);
float FtoC(float);
int main(int argc, char const *argv[])
{
	float x,f;
	printf("Enter a pound to convert to kilogram:");
	scanf("%f",&x);
	printf("kilogram:%f\n",poundTOkg(x));
	printf("Enter a Fahrenheit degree to convert to Celsius degree:");
	scanf("%f",&f);
	printf("Celsius:%f\n",FtoC(f));
	return 0;
}
float poundTOkg(float a){
	return a*0.453592;
}
float FtoC(float a){
	return (a-32)*1.8;
}

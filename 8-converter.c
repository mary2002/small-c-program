#include <stdio.h>
float poundTOkg(float);
float FtoC(float);
int dayTOyear(int);
int dayTOmonth(int);
int dayTOweak(int);
int remindday(int);

int main(int argc, char const *argv[])
{
	float x,f;
	int day;
	printf("Enter a pound to convert to kilogram:");
	scanf("%f",&x);
	printf("kilogram:%f\n",poundTOkg(x));
	printf("Enter a Fahrenheit degree to convert to Celsius degree:");
	scanf("%f",&f);
	printf("Celsius:%f\n",FtoC(f));
	printf("Enter days to convert to years,month and weak:");
	scanf("%d",&day);
	printf("years:%d , months:%d , weaks:%d ,days:%d",dayTOyear(day),dayTOmonth(day),dayTOweak(day),remindday(day));
	return 0;
}
float poundTOkg(float a){
	return a*0.453592;
}
float FtoC(float a){
	return (a-32)*1.8;
}
int dayTOyear(int a){
	return a/365;
}
int dayTOmonth(int a){
	return (a%365)/30;
}
int dayTOweak(int a){
	return ((a%365)%30)/7;
}
int remindday(int a){
 	return((a%365)%30)%7;
}

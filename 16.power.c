#include <stdio.h>
float power(float,float);
int main(int argc, char const *argv[])
{
	float a,p;
	printf("Enter a,p in the general form  a^p :");
	scanf("%f%f",&a,&p);
	
	printf("Power:%f\n",power(a,p));
	return 0;
}
float power(float a,float p){
	int m=1;
for (int i = 1; i <= p; ++i)
{
	m*=a;
}
return m;
}
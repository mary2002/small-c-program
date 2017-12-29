#include <stdio.h>
float areaRec(float,float);
float envireRec(float,float);
float areaSqr(float);
float envirSqr(float);
int main(int argc, char const *argv[])
{
	float x,y,z;
	printf("Enter the width of the rectangel:");
	scanf("%f",&x);
	printf("Enter the length of the rectangle:");
	scanf("%f",&y);
	printf("rectangle area:%f\n",areaRec(x,y));
	printf("rectangle environment:%f\n",envireRec(x,y));
	printf("Enter the width of the Square:");
	scanf("%f",&z);
	printf("rectangle area:%f\n",areaSqr(z));
	printf("rectangle environment:%f\n",envirSqr(z));
	return 0;
}
float areaRec(float a, float b){
	return a*b;
}
float envireRec(float a, float b){
	return (a+b)*2;
}
float areaSqr(float a){
	return a*a;
}
float envirSqr(float a){
	return a*4;
}
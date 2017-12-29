#include <stdio.h>
float areaRec(float,float);
float envireRec(float,float);
float areaSqr(float);
float envirSqr(float);
float areaTri(float,float);
float envireTri(float,float,float);
int main(int argc, char const *argv[])
{
	float x,y,z,s,h,a1,a2,a3;
	printf("Enter the width of the rectangel:");
	scanf("%f",&x);
	printf("Enter the length of the rectangle:");
	scanf("%f",&y);
	printf("rectangle area:%f\n",areaRec(x,y));
	printf("rectangle environment:%f\n",envireRec(x,y));
	printf("Enter the width of the Square:");
	scanf("%f",&z);
	printf("Square area:%f\n",areaSqr(z));
	printf("Square environment:%f\n",envirSqr(z));
	printf("Enter the base of the triangle:");
	scanf("%f",&s);
	printf("Enter the height of the triangle:");
	scanf("%f",&h);
	printf("Enter the triangle's sides:");
	scanf("%f%f%f",&a1,&a2,&a3);
	printf("Triangle area:%f\n",areaTri(s,h));
	printf("Triangle environment:%f\n",envireTri(a1,a2,a3));
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
float areaTri(float a, float b){
	return (a*b)/2;
}
float envireTri(float a, float b,float c){
	return a+b+c;
}
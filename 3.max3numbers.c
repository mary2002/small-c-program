#include <stdio.h>
float max(float,float,float);

int main(int argc, char const *argv[])
{
	float n1,n2,n3;
	printf("Enter three numbers:");
	scanf("%f%f%f",&n1,&n2,&n3);
	printf("The max is:%f\n",max(n1,n2,n3));
	return 0;
}
float max(float n1,float n2,float n3){
	if(n1>n2 && n1>n3)
		return n1;
	else if(n2>n3 && n2>n1)
		return n2;
	else 
		return n3;
}
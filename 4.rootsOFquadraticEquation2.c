#include<stdio.h>
#include<math.h>
void main(){
	     int a,b,c,delta;
	     printf("Enter a,b,c in the general form of the equation a^2 X+b X+c: ");
	     scanf("%d%d%d",&a,&b,&c);
	     delta=(b*b)-((4)*(a*c));
	        if(delta>0){
		 int x1=((-b)+((int) sqrt(delta)))/(2*a);
		 int x2 =((-b)-((int) sqrt(delta)))/(2*a);
		 printf("The answers are x1=%d , x2=%d \n",x1,x2);
	     }else if(delta==0){
		 int x = ((-b)/(2*a));
		 printf("The answer is x=%d ",x);
	     }
	     if(delta < 0 ){
		 printf("The equation don't answer\n");
	     }
}
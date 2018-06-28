#include <stdio.h>
#include <stdlib.h>
void shallowcopy();
void deepcopy();
int main(int argc, char const *argv[])
{

int *l=malloc(sizeof(int));
	int m=6;
	*l=4;
	l=m;// boxing

	int *k=malloc(sizeof(int));
	*k=3;
    m=(int *)k; //unboxing
	
	int *n=malloc(sizeof(int));
	*n=5;
	void *a=n; // boxing
	int *b=(int *)a; //unboxing
 deepcopy();
 shallowcopy();
	return 0;
}
void shallowcopy(){
	 char *s , *s1;
	    s1 = "bye";
	    s = "hello";
	   printf("%s %s\n",s,s1 );
	   s1=s;
	  printf("%s %s\n",s,s1 );
}
void deepcopy(){
		int a,b;
	 a=3,b=6;
	printf("a=%d , b=%d\n",a,b );

	int c=a;
	a=b;
	b=c;
	printf("after reverse a=%d , b=%d\n",a,b );

	}

#include <stdio.h>
#include <string.h> 
# include <stdlib.h>
int main(int argc, char const *argv[])
{
	if(argc<=1){
		printf("There is'nt any arguments\n" );
		return 1;
	}
if(strcmp(argv[2], "+") == 0)
	printf("%d\n", atoi(argv[1])+atoi(argv[3]));
else if(strcmp(argv[2], "-") == 0)
	printf("%d\n", atoi(argv[1])-atoi(argv[3]));
else if(strcmp(argv[2], "/") == 0)
	printf("%d\n", atoi(argv[1])/atoi(argv[3]));
else{
	printf("%d\n", atoi(argv[1]) * atoi(argv[argc-1]));
}
	return 0;
}
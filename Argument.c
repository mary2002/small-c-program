#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
int isFile( char* name)
{
    DIR* directory = opendir(name);

    if(directory != NULL)
    {
     closedir(directory);
     return 0;
    }

    if(errno == ENOTDIR)
    {
     return 1;
    }

    return -1;
}
int main(int argc, char *argv[])
{
	if(argc<=1){
		printf("There isn't any arguments\n" );
		return 1;
	}
	 char* a = argv[2];
if(strcmp(argv[2], "+") == 0)
	printf("%d\n", atoi(argv[1])+atoi(argv[3]));
else if(strcmp(argv[2], "-") == 0)
	printf("%d\n", atoi(argv[1])-atoi(argv[3]));
else if(strcmp(argv[2], "/") == 0)
	printf("%d\n", atoi(argv[1])/atoi(argv[3]));
else if(isFile(a) == 1){
	printf("%d\n", atoi(argv[1]) * atoi(argv[argc-1]));
}else{
	printf("You can use only four basic mathematical operands\n" );
	return 1;
}
	return 0;
}
#include "first_module.h"

#include <stdio.h>

int print_parms(int argc, char **argv)
{
	for (int i=0; i<argc; i++)
	{
		printf("%s \n", argv[i]);
	}
	if(!argc) printf("No arguments!!!\n");
	return !argc;
}

#ifndef TEST
int main( int argc, char *argv[] )
{
	printf("Hello GitHub Action... \n");
}
#endif

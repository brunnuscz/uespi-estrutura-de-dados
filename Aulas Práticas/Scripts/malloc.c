#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p = (int *) malloc(sizeof(int));
	
	*p = 1000;
	printf("%i", *p);
	
	free(p);
	
	return 0;
}

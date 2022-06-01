#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int contestant[] = {1, 2, 3};
	int *choise = contestant;
	contestant[0] = 2;
	contestant[1] = contestant[2];
	contestant[2] = *choise; 
	printf ("im going to pick the contestant number %i \n", contestant[2]);
	return 0;
}

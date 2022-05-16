#include <stdlib.h>
#include <stdio.h>

int fora = '2';

int main ()

{
	int dentro = 1;
	printf("fora está guardado em %p\n", &fora);
	printf("dentro está guardado em %p\n", &dentro);
	return 0;
}

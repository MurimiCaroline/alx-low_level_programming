#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main- is the entry point of the program.
*
*Return:zero if no error.
**/

int main(void)

	{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
	else if (n == 0)
		printf("is zero\n", n);
	else
		printf("is negative\n", n);
	return (0);
	}


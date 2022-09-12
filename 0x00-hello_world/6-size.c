#include <stdio.h>
/**
 *main-is the entry point of the program.
 *
 *Return:zero if no error. non-zero value if errors.
 */
int main(void)
{
	printf("Size of a char: %ld bytes (s)\n", sizeof(char));
	printf("Size of an int: %ld bytes (s)\n", sizeof(int));
	printf("Size of a long int: %ld bytes (s)\n", sizeof(long int));
	printf("Size of a float: %ld bytes (s)\n", sizeof(float));
	return(0);
}


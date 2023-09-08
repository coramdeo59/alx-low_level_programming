#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d and is 0\n", n);
	else if (n > 5)
		printf("%d and is greater than 5\n", n);
	else if (n < 6 && != 0)
		printf("%d and is less than 6 and not 0",n);

	return (0);
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if(n == 0)
	{
		printf(" The nubmer is zero, %d", n);
	}
	else if( n > 0) 
	{
		printf(" The number is positive, %d", n);
	}
	else
	{
		printf(" The number is Negative, %d", n);
	}

	return (0);
}

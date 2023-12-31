#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times.
 *
 * Description: Uses _putchar to print the lowercase alphabet ten times.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}


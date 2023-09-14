#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a newline.
 */
void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }

    putchar('\n');
}

/**
 * main - Entry point, calls print_alphabet function.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
    print_alphabet();
    return (0);
}

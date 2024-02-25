#include <stdio.h>

/**
 * main - Prints all letters of alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sl;
	char ul;

	for (sl = 'a'; sl <= 'z'; sl++)
	{
		putchar(sl);
	}
	for (ul = 'A'; ul <= 'Z'; ul++)
	{
		putchar(ul);
	}

	putchar('\n');

	return (0);
}

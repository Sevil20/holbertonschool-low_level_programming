#include <stdio.h>

/**
 * main - Prints all letters of alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char sl;

	for (i = 0; i < 10; i++)
	{
		for (sl = 'a'; sl <= 'z'; sl++)
		{
			putchar(sl);
		}
		putchar('\n');
	}

	return (0);
}

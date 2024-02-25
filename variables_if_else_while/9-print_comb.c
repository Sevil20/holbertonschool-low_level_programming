#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * Numbers must be separated by ", ", followed by a space
 * Numbers should be printed in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');

	return (0);
}

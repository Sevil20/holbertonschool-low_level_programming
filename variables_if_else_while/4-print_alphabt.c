#include <stdio.h>

/**
 * main - Prints all letters of alphabet in lowercase if conditions are met
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sl;

	for (sl = 'a'; sl <= 'z'; sl++)
	{
		if (sl == 'e'  sl == 'q')
		{
			break;
		}
		else
		{
			putchar(sl);
		}
	}

	putchar('\n');

	return (0);
}

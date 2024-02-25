#include "main.h"

/**
 * main - Prints all letters of alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	char sl;

	for (i = 0; i < 10; i++)
	{
		for (sl = 'a'; sl <= 'z'; sl++)
		{
			_putchar(sl);
		}
		_putchar('\n');
	}

}

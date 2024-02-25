#include "main.h"

/**
 * print_alphabet_x10 - Prints all letters of the alphabet in lowercase 10 times
 *
 * Description: This function prints all lowercase letters of the alphabet
 *              10 times, each time followed by a new line.
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

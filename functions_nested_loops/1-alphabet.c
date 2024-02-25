#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a newline
 */
void print_alphabet(void)
{
	char sl;

	for (sl = 'a'; sl <= 'z'; sl++)
	{
		_putchar(sl);
	}

	_putchar('\n');
}

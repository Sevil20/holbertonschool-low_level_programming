#include "main.h"

/**
 * main - Prints single digit numbers of base 10, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}

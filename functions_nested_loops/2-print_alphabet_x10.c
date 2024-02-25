#include "main.h"

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
			_putchar(sl);
		}
		_putchar('\n');
	}

}

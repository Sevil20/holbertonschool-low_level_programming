#include "main.h"

/**
 * print_square - Prints a square made of '#' characters.
 * @size: The size of the square to be printed.
 */
void print_square(int size)
{
    if (size > 0)
    {
        int i, j;

        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}

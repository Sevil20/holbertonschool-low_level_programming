#include "main.h"

/**
 * print_square - Prints a square made of '#' characters.
 * @size: The size of the square to be printed.
 */
void print_square(int size)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}

#include "main.h"

/**
 * main - Prints single digit numbers of base 10, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
    int i;

    if (n > 0 && n != 0)
    {
        for (i = 0; i <= n; i++)
        {
            _putchar('_');
        }
    }
    else
    {
        _putchar('\n');
    }
}

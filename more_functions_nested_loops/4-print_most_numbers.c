#include "main.h"

/**
 * print_most_numbers - Prints single digit numbers of base 10, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
    int i = 0;

    while (i < 10)
    {
        if (i != 2 && i != 4)
        {
            _putchar(i + '0');
        }
        i++;
    }
    _putchar('\n');
}

#include <stdio.h>

/**
 * main - Prints all hexadecimal digits in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char a;

    for (a = '0'; a <= 'f'; a++)
    {
           putchar(a);
    }

    putchar('\n');

    return (0);
}

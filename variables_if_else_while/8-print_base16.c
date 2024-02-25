#include <stdio.h>

/**
 * main - Prints all hexadecimal digits in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char a;
    int i = 0;

    while (i < 10)
    {
        putchar(i + '0');
        i++;
    }

    for (a = 'a'; a <= 'f'; a++)
    {
        putchar(a);
    }

    putchar('\n');

    return (0);
}

#include "main.h"

/**
 * main - Prints if character uppercase or not.
 *
 * Return: Always (Success)
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

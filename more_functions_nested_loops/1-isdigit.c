#include "main.h"

/**
* _isupper - Checks if a character is number.
* @c: The character to be checked.
*
* Return: 1 if the character is number, 0 otherwise.
*/
int _isdigit(int c)
{
    if (c >= 48 && c <= 57)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

#include "main.h"

/**
 * 2-strlen.c - Takes a pointer to an int as parameter and
 *               updates the value it points to to 98
 *
 * @n: Pointer to an integer
 *
 * Return: int
 */
int _strlen(char *s)
{
   int i;
   for(i = 0; *s[i] != '\0'; ++i)
     printf("%d\n", i);
     return(0);
}

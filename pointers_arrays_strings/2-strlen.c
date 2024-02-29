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
   int len;
   len = strlen(*s);
   printf("%d\n", len);
   return (0);
}

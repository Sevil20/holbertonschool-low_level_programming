#include "main.h"

/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		printf("+");
		return(1);
	}
	else if (n == 0)
	{
		printf("0");
		return(0);
	}
	else
	{
		printf("-");
		return(-1);
	}

	return (0);
}

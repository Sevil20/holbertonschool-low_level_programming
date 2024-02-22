/*
 * File: 101-quote.c
 * Auth: Sevil Mirzayeva
 */

#include <unistd.h>

/**
 * main - Entry point for function
 *
 * Return: 1 always (success)
 */
int main(void)
{
        char *word = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";


	write(2, word, 59);
	return (1);
}

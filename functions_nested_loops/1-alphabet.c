#include "holberton.h"

/**
 * main - Prints the alphabet, in lowercase followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
      char sl;
      
      for(sl='a';sl<='z';sl++)
      {
	_putchar(sl);
      }
      
      _putchar('\n');
    
      return(0);
}

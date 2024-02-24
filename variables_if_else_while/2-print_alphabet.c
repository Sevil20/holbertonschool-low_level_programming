#include <stdio.h>

/**
 * main - Prints all letters of alphabet in lowercase 
 *
 * Return: Always (Success)
 */
int main(void)
{
      char startLetter = 'a';
      char endOfLetter = 'z'; 

      if(startLetter <= endOfLetter)
      {
	putchar("%c", startLetter);
	putchar(startLetter + 1, endOfLetter);
      }
      return(0);
      
}  

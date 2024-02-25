#include <stdio.h>

/**
* main - Prints all letters of alphabet in lowercase 
*
* Return: Always (Success)
*/
int main(void)
{
      char sl;
      
      for(sl = 'z';sl >= 'a';sl--)
      {
	   putchar(sl);
      }
      
      putchar('\n');
    
      return(0);
      
}  

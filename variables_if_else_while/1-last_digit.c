#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if  the last digit of n is greater than 5 
 *        0 and less than 6 and not 0
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        
	char word[] = "Last digit of";
        if(n>5){
	   printf("%s and is greater than 5\n", word);
	}		
	else if(n<6 && n!==0){
           printf("%s and is less than 6 and not 0\n", word);
	}	
	else{
	   printf("%s and is 0\n", word);
	}	

	return (0);
}

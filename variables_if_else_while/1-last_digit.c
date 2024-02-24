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
        if((n%10)>5){
	   printf("%s %d is %d and is greater than 5\n", word, 
           n, n%10);
	}		
	else if((n%10)<6 && (n%10)!==0){
           printf("%s %d is %d and is less than 6 and not 0\n",            word,n n%10);
	}	
	else{
	   printf("%s %d is %d and is 0\n", word,n,n%10);
	}	

	return (0);
}

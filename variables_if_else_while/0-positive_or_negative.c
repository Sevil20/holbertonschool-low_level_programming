#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* The number, followed by
*  if the number is greater than 0: is positive
*  if the number is 0: is zero
*  if the number is less than 0: is negative */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if(n>0) {
        printf("is positive\n",n);
        } if(n=0){
        printf("is zero\n",n);
        } else{
	printf("is negative\n",n);
	}	
	return (0);
}

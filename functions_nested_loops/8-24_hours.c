#include "main.h"

/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  *
  * Return: ...
  */
void jack_bauer(void)
{

    int i;
    int j;
    int k;
    int h;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            for (k = 0; k < 10; k++)
            {
                for (h = 0; h <= 9; h++)
                {
                    if ((i < 3 && j < 4) && (k < 6 && h < 10))
                    {
                        putchar(i + '0');
                        putchar(j + '0');
                        putchar(':');
                        putchar(k + '0');
                        putchar(h + '0');
                        putchar('\n');
                    }
                }
            }
        }
   
}
}

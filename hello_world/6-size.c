/*
 * File: 6-size.c
 * Auth: Sevil Mirzayeva <9079@holbertonschool.com>
 */

#include <stdio.h>
int main(void)
{

  /**
 * main - Prints "Size of a char: 1 byte(s)
 *                Size of an int: 4 byte(s)
 *                Size of a long int: 4 byte(s)
 *                Size of a long long int: 8 byte(s)
 *                Size of a float: 4 byte(s)
 *
 * Return: Always 0.
 */
  printf("Size of a char: byte(s)\n", sizeof(char)");
  printf("Size of a int: byte(s)\n", sizeof(int)");
  printf("Size of a long int: byte(s)\n", sizeof(long int)");
  printf("Size of a long long int: byte(s)\n", sizeof(long long int)");
  printf("Size of a float: byte(s)\n", sizeof(float)");
  return (0);
}

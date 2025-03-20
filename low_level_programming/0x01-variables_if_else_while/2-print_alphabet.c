#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char low_case;

  for( low_case = 'a'; low_case <= 'z'; low_case++ )
    {
      putchar(low_case);
    }
  putchar('\n');

  return (0);
}

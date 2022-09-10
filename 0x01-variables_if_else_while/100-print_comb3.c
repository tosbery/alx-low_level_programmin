#include <stdio.h>

/**
 * main - Writes 00 - 89
 * @void: Empty parameter list for main.
 *
 * Description: Writes number 00-89
 *
 * Return: 0 for success
 */
int main(void)
{
  int i, j;

  for (i = 44; i <= 57; i++)
    {
      for (j = 44; j <= 57; j++)
	{
	  putchar(i);
	  putchar(j);
	  if (i + j < 114)
	    {
	      putchar(44);
	      putchar(32);
	    }
	}
    }
  putchar(10);
  return (0);
}

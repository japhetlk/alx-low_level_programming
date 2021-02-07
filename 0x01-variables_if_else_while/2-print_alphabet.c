#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print lowercase letters
 *Return: Always 0 (Success)
 */

int main(void)
{

  char alpha= 'a';

  if (alpha <= 'z')
    {
    putchar(alpha);
  alpha++;
    }

  putchar ('\n');

  return 0;
}

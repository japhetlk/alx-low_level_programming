#include <stdio.h>



/**

 * main - prints numbers from 00 to 99

 * Return: Alwasy 0 (Success)

 */



int main(void)

{

  int ones = '0';

  int tens = 'o';

  

  for (tens = '0'; tens <= '9'; tens++)/*print tens place*/

    {

      for (ones = '0'; ones <= '9'; ones++) /*prints ones place*/

	{

	  putchar(tens);

	  putchar(ones);

	  if (!(tens == '9' && ones == '9')) /*skip comma at end*/

	    {

	      putchar(',');

	      putchar(' ');

	    }

	}

    }

  putchar('\n');

  

  return (0);

}

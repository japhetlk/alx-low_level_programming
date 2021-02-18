#include "holberton.h"



/**

 * swap_int - swaps the values of two integers

 * @a: argument one

 * @b: argument two

 */



void swap_int(int *a, int *b)

{

  int c = *a;
  int d = *b;

  *a = d;

  *b = c;

}

#include "main.h"
/**
  * swap_int - swap two integers.
  * @a: integer 0ne
  * @b: integerr Two
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

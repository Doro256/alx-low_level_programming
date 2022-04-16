#include "main.h"

/**
  * print_number - like a hello world
  * @n:integer to be printed
  * No return
  */

void print_number(int n)
{
	unsigned int n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n1;
	}
	if (n1 > 9)
	{
		print_number(n1 / 10);
	}
	_putchar(n1 % 10 + '0');
}


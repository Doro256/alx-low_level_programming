#include "main.h"
/**
  * print_line - function that draws a straight line
  * Return: void
  * @n: The number of '_' characters to use
  */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}



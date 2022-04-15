#include "main.h"
/**
  * print_triangle - prints a triangle, followed by a new line
  * @size: Height of the triangle
  * Return: void
  */
void print_triangle(int size)
{
	int i, j, size;

	while (size > 0)
	{
		for (i = 0; i < y; i++)
		{
			_putchar((i < size - 1) ? ' ' : '#');
		}
		_putchar('\n);
		size--;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}


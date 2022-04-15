#include "main.h"
/**
  * print_triangle - prints a triangle, followed by a new line
  * @size: Height of the triangle
  * Return: void
  */
void print_triangle(int size)
{
	int i, j, spaces;

	for (i = 0; i < size; i++)
	{
		for (spaces = size - 1 - i; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

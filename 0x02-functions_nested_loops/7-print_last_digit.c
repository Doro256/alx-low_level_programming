#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  * @n : number to check
  * Return: 0 or 1
  */

int print_last_digit(int n)
{
	int num = n % 10;

	n = n <= 0 ? n : n * -1;
	_putchar('0' + num);

	return (num);
}

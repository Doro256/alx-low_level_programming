#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  * @n : number to check
  * Return: 0 or 1
  */

int print_last_digit(int n)
{
	n = n >= 0 ? n : n * -1;
	int lastDigit = n % 10;

	_putchar('0' + lastDigit);
	return (lastDigit);
}

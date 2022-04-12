#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  * @n : number to check
  * Return: 0 or 1
  */

int print_last_digit(int n)
{
	int lastDigit;

	if (n > 0)
	{
		lastDigit = n % 10;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = (-1 * (n % 10));
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}

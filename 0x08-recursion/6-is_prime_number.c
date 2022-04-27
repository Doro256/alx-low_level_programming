#include "main.h"

/**
  * prime_finder - checks for prime number
  * @num: number to check
  * @i: integer
  * Return: 1 if prime, 0 otherwise
  */

int prime_finder(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (prime_finder(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
  * is_prime_number - checks whether n is prime number
  * @n: number to check
  * Return: 1 if prime, otherwise 0
  */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_finder(n, 2));
	}
}

#include "main.h"

/**
  * help_find_sqrt - function to help find sqrt
  * @z: number whose sqrt is to be found
  * @find: number to be found
  * Return: sqrt of number
  */

int help_find_sqrt(int z, int find)
{
	if (z * z == find)
	{
		return (z);
	}
	if (z * z > find)
	{
		return (-1);
	}
	else
	{
		return (help_find_sqrt(z, find + 1));
	}
}

/**
  *  _sqrt_recursion - returns natural square root of a number
  * @n: number to squareroot
  * Return: sqrt of n
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (help_find_sqrt(n, 0));
	}
}


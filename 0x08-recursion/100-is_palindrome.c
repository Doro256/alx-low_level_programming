#include "main.h"

/**
  * _strlen_recursion - size
  * @s: pointer to string params
  * Return: recursion
  */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
  * pal - palindrome
  * @s: pointer to string
  * @pos: position
  * Return: boolean
  */

int pal(char *s, int pos)
{
	if (pos < 1)
	{
		return (1);
	}
	if (*s == *(s + pos))
	{
		return (pal(s + 1, pos - 2));
	}
	return (0);
}

/**
  * is_palindrome - palindrome
  * @s: pointer to string
  * Return: recursion
  */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pal(s, len - 1));
}

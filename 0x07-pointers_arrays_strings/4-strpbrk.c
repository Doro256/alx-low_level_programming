#include "main.h"

/**
  * _strpbrk - locates a character in a string
  * @s: is a pointer type char
  * @accept: is a pointer type char
  * Return: The number of bytes repeated
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

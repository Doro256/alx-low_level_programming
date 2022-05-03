#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: pointer type char
  * @src: pointer type char
  * @n: integer variable
  * Return: Always 0;
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

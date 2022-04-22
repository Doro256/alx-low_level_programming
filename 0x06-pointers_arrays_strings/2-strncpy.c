#include "main.h"
/**
  * *_strncpy -  function that copies a string
  * @dest: pointer to char
  * @src: pointer to char
  * @n: number of bytes
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

#include "main.h"
/**
  *_strncat -  function that concatenates two strings.
  * @dest: pointer to char
  * @src: pointer to char
  * @n: number of bytes
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}


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
	int i, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}


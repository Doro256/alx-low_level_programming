#include "main.h"
/**
  * _strlen - returns length of the string
  * @s: string
  * Return: length of the string
  */
int _strlen(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

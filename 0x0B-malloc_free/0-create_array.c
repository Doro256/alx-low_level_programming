#include "main.h"

/**
  * *create_array - function that creates an array of chars
  * @size: size of the array
  * @c: character to initialize
  * Return: a pointer to char
  */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
		return (NULL);

	/* Define values with malloc */
	buffer = malloc(sizeof(c) * size);

	if (buffer == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		buffer[i] = c;
	}
	i++;

	return (buffer);
}

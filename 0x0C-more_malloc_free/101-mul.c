#include "main.h"
#include <stdlib.h>

#define ERR_MSG "Error"

int _isdigit(char *s);
/**
  * main - multiplies two positive numbers
  * @argc: number of parameters
  * @argv: args
  * Return: 0 if successful
  */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		for (i = 0; ERR_MSG[i] != '\0'; i++)
			_putchar(ERR_MSG[i]);
		_putchar(10);
		exit(98);
	}
	if (_isdigit(argv[1]) == 0)
		printf("%s\n", argv[1]);

	return (0);
}

/**
   * _isdigit - checks if string is a number or not
   * @s: the string to be checked
   *
   * Return: 1 if true, else 0.
   */

int _isdigit(char *s)
{
	while (*s)
	{
		if (*s < 48 || *s > 57)
			return (1);
		s++;
	}
	return (0);
}

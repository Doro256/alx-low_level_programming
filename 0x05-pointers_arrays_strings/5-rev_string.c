#include "main.h"
/**
  * rev_string - Reverse a string
  * @s: string to reverse
  * Return: void
  */

void rev_string(char *s)
{
	int i = 0, len;

	len = _strlen(s) - 1;
	while (length > 1)
	{
		swap_char(s + len, s + i);
		i++;
		len--;
	}
}

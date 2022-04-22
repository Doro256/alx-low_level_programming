#include "main.h"

/**
  * cap_string - capitalizes
  * @s: string to be capitalized
  * Return: *s
  */

char *cap_string(char *s)
{
	int i, j;
	char del[] = " \t\n,;.!?\"(){}";

	while (!(s[i] >= 'a' && s[i] <= 'z'))
	{
		i++;
	}
	if (s[i] == del[i])
	{
		s[i] -= 32;
	}
	i++;
}

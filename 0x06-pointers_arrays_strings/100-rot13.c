#include "main.h"

/**
  * rot13 - encode string using rot13
  * @s: pointer to string
  * Return: *s
  */

char *rot13(char *s)
{
	int i, j;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alphrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = alphrot[j];
				break;
			}
		}
	}
	return (s);
}

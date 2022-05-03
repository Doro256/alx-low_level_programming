#include "main.h"

/**
 * _strstr - locates a character in a string
 * @haystack: is a pointer type char
 * @needle: is a pointer type char
 * Return: number of bytes repeated
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}

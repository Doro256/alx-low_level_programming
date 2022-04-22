#include "main.h"
/**
  * _strcmp - function that compares two strings
  * @s1: pointer to character
  * @s2: pointer to character
  * Return: 0 if the strings are equal
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] == s2[i] && (s1[i] == '\0' || s2[i] != '\0'); i++);
	
	return (s1[i] - s2[i]);
}



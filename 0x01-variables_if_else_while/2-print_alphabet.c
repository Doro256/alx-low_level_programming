#include <stdio.h>
#include <ctype.h>
/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		toupper(c);
	for (c = 'A'; c <= 'Z'; c++)
		tolower(c);
	putchar('\n');
	return (0);
}


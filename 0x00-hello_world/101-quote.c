#include <stdio.h>
#include <unistd.h>
/**
  * main - Print to stderr
  * Return: Always 1  (Error)
  */

int main(void)
{
	write(stderr, "and that piece of art is useful\" - Dora Korpar, 2015-10-1\n");
	return (1);

}


#include "main.h"
#include <math.h>
/**
  * binary_to_uint - converts a binary number to unsigned int
  * @b: string containing the binary number
  * Return: the converted number
  */

unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int place_val = 0;
	int position = 0;

	if (!b)
		return (0);


	while (index >= 0)
	{
		place_val = place_val + (b[index] - 48) * pow(2, position);
		index--;
		position++;
	}
	return (place_val);
}



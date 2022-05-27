#include "main.h"
/**
  * binary_to_uint - converts a binary number to unsigned int
  * @b: string containing the binary number
  * Return: the converted number
  */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int pVal = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < 48 || b[index] > 49)
			return (0);
		pVal = 2 * pVal + (b[index] - 48);
	}
	return (pVal);
}

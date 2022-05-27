#include "main.h"

/**
  * flip_bits - number of bits you would need to flip
  * to get from one number to another
  * @n: parameter
  * @m: destiny
  * Return: nflips
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips = 0;

	while (n > 0 || m > 0)
	{
		int j1 = (n & 1);
		int j2 = (m & 1);

		if (j1 != j2)
		{
			flips++;
		}

		n >>= 1;
		m >>= 1;
	}
	return (flips);
}

#include "main.h"

/**
 * flip_bits - Returns the number of bits I would
 * The number of bit flips required to transition from one number to another
 * @m: The digit 2
 * @n: The digit 1
 *
 * Return: The count of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}


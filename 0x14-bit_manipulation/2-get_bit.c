#include "main.h"

/**
 * get_bit - Provides the value of a single bit at a specified position
 * index
 * @index: index of the bit
 * @n: unsigned long int input
 *
 * Return: The bit's numerical worth
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}


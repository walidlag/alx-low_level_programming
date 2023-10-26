#include "main.h"

/**
 * clear_bit - Resets a particular bit's value to 0
 * @n: Pointer to an unsigned long integer
 * @index: index of the bit
 * At a specified index.
 *
 * Return: Returns a result of 1 for success and -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}


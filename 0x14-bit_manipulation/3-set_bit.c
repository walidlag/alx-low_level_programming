#include "main.h"

/**
 * set_bit - Sets a specific bit's value to 1
 * @n: Pointer to an unsigned long integer
 * @index: index of the bit
 * at a given index
 *
 * Return: Returns a value of 1 for success and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}


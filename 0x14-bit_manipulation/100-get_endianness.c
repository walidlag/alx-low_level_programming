#include "main.h"

/**
 * get_endianness - Verifies the endianness
 *
 * Return: Returns 0 for big-endian and 1 for little-endian.
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}


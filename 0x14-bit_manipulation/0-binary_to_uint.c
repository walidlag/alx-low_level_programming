#include "main.h"

/**
 * binary_to_uint - CONverts Binary Number to AN
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (!b)
        return 0;

    for (int i = 0; b[i] != '\0'; i++)
    {
        result <<= 1;

        if (b[i] == '1')
            result |= 1;
        else if (b[i] != '0')
            return 0;
    }

    return result;
}


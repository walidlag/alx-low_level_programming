#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int.
 * @b: binary.
 *
 * Return: unsigned int or 0 if there's an invalid character or NULL string.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (!b)
        return 0;

    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '0')
        {
            result <<= 1;
        }
        else if (b[i] == '1')
        {
            result = (result << 1) | 1;
        }
        else
        {
            return 0; // Invalid character in the string
        }
    }

    return result;
}

#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if value
 *         is not present in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}

/**
 * binary_search_index - Searches for a value in a sorted array using binary search.
 * @array: A pointer to the first element of the array to search.
 * @l: The left index of the search interval.
 * @r: The right index of the search interval.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if value
 *         is not present in array.
 */
int binary_search_index(int *array, size_t l, size_t r, int value)
{
    size_t i;
    if (array == NULL)
        return (-1);
    for (; r >= l;)
    {
	    printf("Searching in array: ");
        for (i = l; i < r; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);
	i = l + (r - l) / 2;

	/* If the value is found at the midpoint, return its index */
        if (array[i] == value)
            return (i);
	if (array[i] > value)
            r = i - 1;
	else
            l = i + 1;
    }

    /* If the value is not found, return -1 */
    return (-1);
}

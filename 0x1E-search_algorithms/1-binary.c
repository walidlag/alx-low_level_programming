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
void print_array(int *array, int l, int r)
{
	int i;

	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
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
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, m;

	if (!array || size == 0)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		print_array(array, l, r);
		m = l + (r - l) / 2;

		if (array[m] > value)
			r = m - 1;
		else if (array[m] < value)
			l = m + 1;
		else
			return (m);
	}

	return (-1);
}

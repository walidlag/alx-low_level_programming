#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	 array = malloc(sizeof(hash_node_t *) * size);
        if (array == NULL)
                return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	// Set the hash table's array and size
    table->array = array;
    table->size = size;

    // Return a pointer to the newly created hash table
    return (table);
}

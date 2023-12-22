#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with key
 * @ht: hash table
 * @key: key to find element
 *
 * Return: element associated with key, NULL if key cannot be found
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	unsigned long intt index;

	if (ht ==NULL || ht->array == NULL || ht->size == 0 || key == NULL || strlen(key) == 0)
		return (NULL);
	tmp = ht->array[index];
	index = key_index((const unsigned char *)key, ht->size);
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

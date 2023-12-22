#include "hash_tables.h"

/**
 * hash_table_delete - Delete the hash table
 * @ht: A pointer to a hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int index;
    hash_node_t *node, *next;

    if (ht == NULL || ht->array == NULL || ht->size == 0)
        return;

    for (index = 0; index < ht->size; index++)
    {
        node = ht->array[index];
        while (node != NULL)
        {
            next = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = next;
        }
    }

    free(ht->array);
    ht->array = NULL;
    ht->size = 0;
    free(ht);
}

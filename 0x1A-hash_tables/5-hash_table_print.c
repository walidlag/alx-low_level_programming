#include "hash_tables.h"

/**
* hash_table_print - prints the hash table
* @ht: A pointer to the hash table to print
*
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
        unsigned long int index;
        unsigned char comma_flag = 0;
        hash_node_t *tmp;
        
        if (ht == NULL || ht->array == NULL)
            return;

        printf("{");    
        for (index = 0; index < ht->size; index++)
        {
            tmp = ht->array[index];
            while (tmp != NULL)
            {
                if (comma_flag == 1)
                    printf(", ");
                printf("'%s': '%s'", tmp->key, tmp->value);
                tmp = tmp->next;
                comma_flag = 1;
            }
        }       
        printf("}\n");
}

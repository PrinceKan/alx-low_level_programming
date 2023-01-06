#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int idx;
	hash_node_t *new_node, *delete;

	if (ht != NULL)
	{
		for (idx = 0; idx < ht->size; idx++)
		{
			new_node = ht->array[idx];

			while (new_node != NULL)
			{
				delete = new_node->next;
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				new_node = delete;
				delete = NULL;
			}

			free(new_node);
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}

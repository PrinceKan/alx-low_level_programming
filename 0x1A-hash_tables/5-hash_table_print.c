#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int idx;
	hash_node_t *new_node;
	char *comma;

	comma = "";

	if (ht != NULL)
	{
		printf("{");

		for (idx = 0; idx < ht->size; idx++)
		{
			new_node = ht->array[idx];

			while (new_node != NULL)
			{
				printf("%s'%s': '%s'", comma, new_node->key, new_node->value);
				comma = ", ";
				new_node = new_node->next;
			}
		}
		printf("}\n");
	}
	else
		return;
}

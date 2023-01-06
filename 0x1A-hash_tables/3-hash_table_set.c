#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int idx;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || key == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] != NULL)
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			ht->array[idx]->value = strdup(value);
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t *));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[idx] == NULL)
		new_node->next = NULL;
	else
		new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}

#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: the size of the array
 *
 * Return: the idx at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int idx;

	idx = hash_djb2(key);
	idx =  idx % size;
	return (idx);
}

#include "hash_tables.h"

/**
 * index_key - gives index of a key
 * @key: holds the value
 * @size: size of the arrayt of the hash table
 * Return: index of the key
 * Description: uses hash_djb2 function
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

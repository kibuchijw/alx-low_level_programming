#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key
 * @key: The key
 * @size: Size of the array hash table
 *
 * Return: Index at which key/value pair should be stored on array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;

	/* Calculate hash code using the djb2 algorithm */
	hash_code = hash_djb2(key);

	/* Use modulo to map hash code to index within array size */
	return (hash_code % size);
}

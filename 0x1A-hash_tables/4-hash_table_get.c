#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value associated with key
 * @ht: Hash table to look into
 * @key: Key to search
 *
 * Return: Value associated with the key/NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	/* Check if hash table or key is NULL */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* Get index of key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Search for key in chained linked list at index */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			/* key found, return associated value */
			return (temp->value);
		}
		temp = temp->next;
	}
	/* key not found */
	return (NULL);
}

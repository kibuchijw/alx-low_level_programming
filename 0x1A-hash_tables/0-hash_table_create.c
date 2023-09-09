#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table
 * @size: Size of the array
 *
 * Return: Pointer to newly created hash table/ NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	/* Allocate memory for hash table structure */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Allocate memory for array of hash_node_t pointers */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* Initialize all array elements to NULL */

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	/* Set size of hash table */
	new_table->size = size;

	return (new_table);
}

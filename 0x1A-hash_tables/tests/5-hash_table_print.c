#include "hash_tables.h"

/**
 * hash_table_print - Prints elements of a hash table
 * @ht: Hash table to print
 *
 * Returns: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int printed = 0; /* Flag to track what's printed */

	/* Check if hash table is full */
	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			printed = 1;
			node = node->next;
		}
	}
	printf("}\n");
}

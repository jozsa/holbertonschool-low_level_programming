#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: Size of array
 *
 * Return: Newly created hash table if successful, NULL otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = calloc(new->size, sizeof(hash_node_t *));
	return (new);
}

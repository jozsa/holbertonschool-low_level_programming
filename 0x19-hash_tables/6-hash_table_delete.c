#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *temp;
	hash_node_t *next;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		if (!temp)
			continue;
		while (temp != NULL)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
		ht->array[index] = NULL;
	}
	free(ht->array);
	free(ht);
}

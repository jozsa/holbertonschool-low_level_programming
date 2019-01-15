#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		if (!temp)
			continue;
		while (temp != NULL)
		{
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp->next;
		}
	}
	free(ht->array);
	free(ht);
}

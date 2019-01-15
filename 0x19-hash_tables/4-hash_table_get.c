#include "hash_tables.h"

/**
 * hash_table_get - Gets the value associated with a key of the hash table
 * @ht: The hash table to search
 * @key: The key to match
 *
 * Return: The value if found, NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	temp = ht->array[index];
	if (!temp)
		return (NULL);
	if (strcmp(temp->key, key) == 0)
		return (temp->value);
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

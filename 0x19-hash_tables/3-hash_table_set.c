#include "hash_tables.h"

/**
 * hash_table_set - Insert an element to the hash table
 * @ht: Pointer to the hash table to add element to
 * @key: The key to add to the hash table
 * @value: Value associated with the key to add
 *
 * Return: 1 upon success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t index;
	hash_node_t *new;
	char *key_dup;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	if (strcmp(key, "") == 0 || key == NULL || value == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	key_dup = strdup(key);
	index = key_index((unsigned char *)key_dup, ht->size);
	new->key = key_dup;
	new->value = strdup(value);
	new->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	if (strcmp(ht->array[index]->key, new->key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = new->value;
		return (1);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

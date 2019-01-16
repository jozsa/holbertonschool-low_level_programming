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
	char *dup_val = strdup(value);

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	if (strcmp(key, "") == 0 || key == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = dup_val;
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = dup_val;
	new->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

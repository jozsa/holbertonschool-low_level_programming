#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table in order
 * @ht: The hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *temp;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		if (!temp)
			continue;
		while (temp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}

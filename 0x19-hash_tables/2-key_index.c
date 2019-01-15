#include "hash_tables.h"

/**
 * key_index - Generates index to insert key/value pair into hash table
 * @key: Key to hash
 * @size: Size to find modulo of the hash generated
 *
 * Return: Generated hash
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

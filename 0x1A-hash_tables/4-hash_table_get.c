#include "hash_tables.h"

/**
 * hash_table_get - program startup
 * @ht: pointer to hash_table_t
 * @key: character for key
(* Description: retrieves a value associated with a key)?
 * Return: return (0) is the required function signature
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
	{
		node = node->next;
	}

	return ((node == NULL) ? NULL : node->value);
}

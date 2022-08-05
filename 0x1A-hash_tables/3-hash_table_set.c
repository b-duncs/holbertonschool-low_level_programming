#include "hash_tables.h"

/**
 * hash_table_set - program startup
 * @ht: pointer to hash_table_t
 * @key: character for key
 * @value: character for value
(* Description: adds an element to the hash table)?
 * Return: return (0) is the required function signature
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *duplicate;
	unsigned long int index;
	unsigned long int x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	duplicate = strdup(value);
	if (duplicate == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (x = index; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
			free(ht->array[x]->value);
			ht->array[x]->value = duplicate;
			return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		free(duplicate);
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
		free(new);
		return (0);
	new->value = duplicate;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

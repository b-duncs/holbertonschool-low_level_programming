#include "hash_tables.h"

/**
 * hash_table_create - program startup
 * @size: integer for array
(* Description: creates a hash table)?
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int x;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		table->array[x] = NULL;
	}

	return (table);
}

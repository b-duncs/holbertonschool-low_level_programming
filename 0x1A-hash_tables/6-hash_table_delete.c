#include "hash_tables.h"

/**
 * hash_table_delete - program startup
 * @ht: pointer to hash_table_t
(* Description: deletes a hash table)?
 * Return: return (0) is the required function signature
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node;
	hash_node_t *tmp;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			node = ht->array[x];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}

	free(head->array);
	free(head);
}

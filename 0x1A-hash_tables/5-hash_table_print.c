#include "hash_tables.h"

/**
 * hash_table_print - program startup
 * @ht: pointer to hash_table_t
(* Description: prints a hash table)?
 * Return: return (0) is the required function signature
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int x;
	unsigned char spacer = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (spacer == 1)
			{
				printf(", ");
			}
			node = ht->array[x];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
				{
					printf(" ,");
				}
			}
			spacer = 1;
		}
	}

	printf("}\n");
}

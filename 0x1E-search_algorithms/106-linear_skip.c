#include "search_algos.h"

/**
 * inc_node - Increments a node 'step' times ahead
 * @node: Pointer to a linked list node
 *
 * Return: Pointer to a node 'step' times further
 */
skiplist_t *inc_node(skiplist_t *node)
{
	if (node->express)
		return (node->express);

	while (node && node->next)
		node = node->next;

	return (node);
}

/**
 * linear_skip - Searches a value in a sorted linked list of integers
 * @list: Pointer to linked list
 * @value: Value to search
 *
 * Return: Pointer of the node with n == value, NULL otherwise
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev_lo = NULL;
	skiplist_t *node_lo = list;
	skiplist_t *node_hi = list;

	if (!list)
		return (NULL);

	while (node_hi && value > node_hi->n)
	{
		node_lo = node_hi;
		node_hi = inc_node(node_hi);

		if (!node_hi->next)
			break;

		printf("Value checked at index [%lu] = [%d]\n", node_hi->index, node_hi->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			node_lo->index, node_hi->index);

	for (; node_lo && prev_lo != node_hi; node_lo = node_lo->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", node_lo->index, node_lo->n);
		if (node_lo->n == value)
			return (node_lo);

		prev_lo = node_lo;
	}

	return (NULL);
}

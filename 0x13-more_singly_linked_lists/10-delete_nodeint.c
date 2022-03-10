#include "lists.h"

/**
 * delete_nodeint_at_index - program startup
 * @head: list being evaluated
 * @index: int being evaluated
(*
 * Description: deletes the node at index `index` of a `list_t` list)?
 * Return: return (0) is the required function signature
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dupe;
	listint_t *temp = *head;
	unsigned int node;

	if (temp == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (-1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}
	dupe = temp->next;
	temp->next = dupe->next;
	free(dupe);
	return (1);
}

#include "lists.h"

/**
 * free_list - program startup
 * @head: list being evaluated
(*
 * Description: frees a `list_t` list)?
 * Return: return (0) is the required function signature
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

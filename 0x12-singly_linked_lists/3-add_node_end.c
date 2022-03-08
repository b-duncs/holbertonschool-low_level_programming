#include "lists.h"

/**
 * *add_node_end - program startup
 * @head: list being evaluated
 * @str: char being evaluated
(*
 * Description: adds a new node at the end of a `list_t` list)?
 * Return: return (0) is the required function signature
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *string;
	int length;
	list_t *new;
	list_t *end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	string = strdup(str);
	if (string == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = string;
	new->len = length;
	new->next = NULL;
	for (length = 0; string[length];)
	{
		length++;
	}
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
	}
	return (*head);
}

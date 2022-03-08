#include "lists.h"

/**
 * *add_node - program startup
 * @head: list being evaluated
 * @str: char being evaluated
(*
 * Description: adds a new node at the beginning of a `list_t` list)?
 * Return: return (0) is the required function signature
 */

list_t *add_node(list_t **head, const char *str)
{
	char *string;
	list_t *element;
	int length = 0;

	element = malloc(sizeof(list_t));
	if (element == NULL)
	{
		return (NULL);
	}
	string = strdup(str);
	if (string == NULL)
	{
		free(element);
		return (NULL);
	}
	length = strlen(string);
	element->str = string;
	element->len = length;
	element->next = *head;
	*head = element;
	return (element);
}

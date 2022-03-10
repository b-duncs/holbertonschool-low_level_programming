#include "lists.h"

/**
 * pop_listint - program startup
 * @head: list being evaluated
(*
 * Description: deletes the head node of a `listint_t` list
 * and returns the head node's data (n))?
 * Return: return (0) is the required function signature
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}

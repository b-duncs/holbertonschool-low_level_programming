#include "lists.h"

/**
 * sum_listint - program startup
 * @head: list being evaluated
(*
 * Description: returns the sum of all the data (n)
 * of a `listint_t` list)?
 * Return: return (0) is the required function signature
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

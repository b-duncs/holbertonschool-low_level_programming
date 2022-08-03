#include "lists.h"

/**
 * sum_dlistint - program startup
 * @head: pointer to dlistint_t list
(* Description: returns the sum of all the data (n)
 * of a dlistint_t linked list)?
 * Return: sum of all the data in dlistint_t
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

#include "lists.h"

/**
 * add_dnodeint_end - program startup
 * @head: pointer to dlistint_t list
 * @n: integer for new node
(* Description: adds a new node at the end of a dlistint_t list)?
 * Return: return (0) is the required function signature
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new, *last;

  new = malloc(sizeof(dlistint_t));
  if (new == NULL)
  {
    return (NULL);
  }
  new->n = n;
  new->next = NULL;
  if (*head == NULL)
  {
    new->prev = NULL;
    *head = new;
    return (new);
  }
  last = *head;
  while (last->next != NULL)
  {
    last = last->next;
  }
  last->next = new;
  new->prev = last;

  return (new);
}

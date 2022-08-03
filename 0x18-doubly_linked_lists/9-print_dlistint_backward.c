#include "lists.h"

/**
 * print_dlistint_backward - program startup
 * @h: pointer to dlistint_t list
(* Description: prints all the elements of a dlistint_t list backward)?
 * Return: return (0) is the required function signature
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
  size_t x, buffer;

  if (h == NULL)
  {
    return (0);
  }
  for (x = 0; h->next != NULL; x++)
  {
    h = h->next;
  }
  buffer = x + 1;
  for (x = x + 1; x > 0; x--)
  {
    printf("%d\n", h->n);
    h = h->prev;
  }
  return (buffer);
}

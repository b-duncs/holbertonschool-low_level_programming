#include "lists.h"

/**
 * free_dlistint - program startup
 * @head: pointer to dlistint_t list
(* Description: frees a dlistint_t list)?
 * Return: return (0) is the required function signature
 */

 void free_dlistint(dlistint_t *head)
 {
   dlistint_t *buffer;

   while (head)
   {
     buffer = head->next;
     free(head);
     head = buffer;
   }
 }

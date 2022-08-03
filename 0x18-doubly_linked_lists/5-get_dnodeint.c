#include "lists.h"

/**
 * dlistint_t - program startup
 * @head: pointer to dlistint_t list
 * @index: integer for node
(* Description: returns the nth node of a dlistint_t linked list)?
 * Return: nth node of dlistint_t
 */

 dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
 {
   for (; index != 0; index--)
   {
     if (head == NULL)
     {
       return (NULL);
     }
     head = head->next;
   }

   return (head);
 }

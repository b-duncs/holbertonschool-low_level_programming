#include "lists.h"

/**
 * delete_dnodeint_at_index - program startup
 * @head: pointer to dlistint_t list
 * @int: integer for node
(* Description: deletes the node at index index of a dlistint_t linked list)?
 * Return: return (0) is the required function signature
 */

 int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
 {
   dlistint_t *tmp = *head;

   if (*head == NULL)
   {
     return (-1);
   }
   for (; index != 0; index--)
   {
     if (tmp == NULL)
     {
       return (-1);
     }
     tmp = tmp->next;
   }
   if (tmp == *head)
   {
     *head = tmp->next;
     if (*head != NULL)
     {
       (*head)->prev = NULL;
     }
     else
     {
       tmp->prev->next = tmp->next;
       if (tmp->next != NULL)
       {
         tmp->next->prev = tmp->prev;
       }
     }
   }
   free(tmp);
   return (1);
 }

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_t - program startup
 * @str: char being evaluated
 * @len: int being evaluated
 * @next: struct being evaluated
(*
 * Description: defines new type struct list_t)?
 */

struct list
{
	char *str;
	unsigned int len;
	struct list_t *next;
}

/**
 * struct_t - typedef for struct list
 */
typedef struct list list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* MAIN_H */

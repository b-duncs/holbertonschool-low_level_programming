/**
 * swap_int - program startup
 * @a: first pointer being evaluated
 * @b: second pointer being evaluated
(*
 * Description: swaps the value of two integers)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

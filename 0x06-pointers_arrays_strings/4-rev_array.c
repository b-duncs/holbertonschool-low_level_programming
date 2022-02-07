/**
 * reverse_array - program startup
 * @a: pointer being evaluated
 * @n: integer being evaluated
(*
 * Description: reverses the content of an array of integers)?
 * Return: return (0) is the required function signature
 */

#include "holberton.h"
void reverse_array(int *a, int n)
{
	int string;
	int reverse;

	for (string = n - 1; string >= n / 2; string--)
	{
		reverse = a[string];
		a[string] = a[n - 1 - string];
		a[n - 1 - string] = reverse;
	}
}

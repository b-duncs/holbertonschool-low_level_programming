/**
 * print_array - program startup
 * @a: pointer being evaluated
 * @n: int being evaluated
(*
 * Description: prints `n` elements of an array of integers
 * followed by a new line)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		printf("%d", a[array]);
		if (array == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	putchar('\n');
}

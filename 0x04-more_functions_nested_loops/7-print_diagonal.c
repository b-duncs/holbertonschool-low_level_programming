/**
 * print_diagonal - program startup
 * @n: int being evaluate
(*
 * Description: draws a diagonal line in the terminal)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void print_diagonal(int n)
{
	int diagonal;

	if (n > 0)
	{
		for (diagonal = 0; diagonal < n; diagonal++)
		{
		_putchar(47);
		}
	}
	_putchar('\n');
}

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
	int spacer;

	if (n > 0)
	{
		for (diagonal = 0; diagonal < n; diagonal++)
		{
			for (spacer = 0; spacer < diagonal; spacer++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

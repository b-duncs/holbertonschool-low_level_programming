/**
 * print_square - program startup
 * @size: int being evaluate
(*
 * Description: prints a square followed by a new line)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void print_square(int size)
{
	int square;
	int spacer;

	if (size > 0)
	{
		for (square = 0; square < size; square++)
		{
			for (spacer = 0; spacer < size; spacer++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

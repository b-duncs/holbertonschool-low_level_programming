/**
 * print_triangle - program startup
 * @size: int being evaluated
(*
 * Description: prints a triangle followed by a new line)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void print_triangle(int size)
{
	int triangle;
	int spacer;

	if (size > 0)
	{
		for (triangle = 1; triangle <= size; triangle++)
		{
			for (spacer = 1; spacer <= size; spacer++)
			{
				if (spacer <= size - triangle)
				{
					_putchar(32);
				}
				if (triangle + spacer >= size + 1)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

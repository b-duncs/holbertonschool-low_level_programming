/**
 * print_line - program startup
 * @n: int being evaluate
(*
 * Description: draws a straight line in the terminal)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
		{
		_putchar(95);
		}
	}
	_putchar('\n');
}

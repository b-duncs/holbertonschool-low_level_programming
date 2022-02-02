/**
 * _puts - program startup
 * @str: pointer being evaluated
(*
 * Description: prints a string followed by a new line
 * to the standard output)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

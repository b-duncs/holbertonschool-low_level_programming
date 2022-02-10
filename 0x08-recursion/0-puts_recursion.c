/**
 * _puts_recursion - program startup
 * @s: pointer being evaluated
(*
 * Description: prints a string followed by a new line)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}

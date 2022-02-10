/**
 * _print_rev_recursion - program startup
 * @s: pointer being evaluated
(*
 * Description: prints a string in reverse)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

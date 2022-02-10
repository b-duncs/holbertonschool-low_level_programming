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
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}

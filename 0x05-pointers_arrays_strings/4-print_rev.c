/**
 * print_rev - program startup
 * @s: pointer being evaluated
(*
 * Description: prints a string in reverse followed by a new line)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void print_rev(char *s)
{
	int length;
	int string;

	for (length = 0; s[length] != '\0'; length++)
	{
		continue;
	}
	for (string = length - 1; string >= 0; string--)
	{
		_putchar(s[string]);
	}
	_putchar('\n');
}

/**
 * puts_half - program startup
 * @str: pointer being evaluated
(*
 * Description: prints half of a string followed by a new line)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void puts_half(char *str)
{
	int length;
	int string;
	int half;

	for (length = 0; str[length] != '\0'; length++)
	{
		continue;
	}
	if ((length % 2) == 0)
	{
		half = (length / 2);
	}
	else
	{
		half = ((length + 1) / 2);
	}
	for (string = half; string < length; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}

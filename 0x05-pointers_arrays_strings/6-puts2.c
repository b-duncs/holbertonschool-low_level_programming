/**
 * puts2 - program startup
 * @str: pointer being evaluated
(*
 * Description: prints every other character of a string
 * starting with the first character followed by a new line)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void puts2(char *str)
{
	int length;
	int string;

	for (length = 0; str[length] != '\0'; length++)
	{
		continue;
	}
	for (string = 0; string < length; string += 2)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}

/**
 * print_numbers - program startup
(*
 * Description: prints the numbers `0` to `9` followed by a new line)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}

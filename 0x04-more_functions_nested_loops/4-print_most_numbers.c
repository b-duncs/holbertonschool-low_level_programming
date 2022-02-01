/**
 * print_most_numbers - program startup
(*
 * Description: prints the numbers `0` to `9` followed by a new line
 * and does not print `2` and `4`)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number != '4' && number != '2')
		{
			_putchar(number);
		}
	}
	_putchar('\n');
}

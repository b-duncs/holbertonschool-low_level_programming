/**
 * print_to_98 - program startup
 * @n: int being evaluated
(*
 * Description: prints all natural numbers from `n` to `98`)?
 * Return: 
 */

#include "main.h"
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n > 98)
		{
			printf("%i, ", n--);
		}
		printf("%i\n", n);
	}
	else
	{
		for (n < 98)
		{
			printf("%i, ", n++);
		}
		printf("%i\n", n);
	}
}

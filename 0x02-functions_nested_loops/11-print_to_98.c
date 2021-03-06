/**
 * print_to_98 - program startup
 * @n: int being evaluated
(*
 * Description: prints all natural numbers from `n` to `98`)?
 */

#include "main.h"
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%i, ", n--);
		}
		printf("%i\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%i, ", n++);
		}
		printf("%i\n", n);
	}
}

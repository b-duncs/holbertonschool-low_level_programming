#include "main.h"

/**
 * print_binary - program startup
 * @n: int being evaluated
(*
 * Description: prints the binary representation of a number)?
 * Return: return (0) is the required function signature
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}

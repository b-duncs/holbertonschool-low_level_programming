/**
 * print_sign - program startup
 * @n: int being evaluated
(*
 * Description: prints the sign of a number
 * and returns `1` and prints `+` if `n` is greater than zero
 * and returns `0` and prints `0` if `n` is zero
 * and returns `-1` and prints `-` if `n` is less than zero?
 * Return: return (0) exits program successfully, return (1) throws an error
 */

#include "main.h"
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

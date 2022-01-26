/**
 * print_last_digit - program startup
 * @n: int being evaluated
(*
 * Description: prints the last digit of a number?
 * Return: return (0) is the required function signature
 */

#include "main.h"
int print_last_digit(int n)
{
	n = (n % 10);
	_putchar(n + '0');
	return (n);
}

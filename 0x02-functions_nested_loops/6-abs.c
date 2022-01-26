/**
 * _abs - program startup
 * @n: int being evaluated
(*
 * Description: computes the absolute value of an integer?
 * Return: return (0) is the required function signature
 */

#include "main.h"
int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		_putchar(-n);
	}
	return (0);
}

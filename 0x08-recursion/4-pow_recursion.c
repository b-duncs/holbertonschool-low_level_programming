/**
 * _pow_recursion - program startup
 * @x: first int being evaluated
 * @y: second int being evaluated
(*
 * Description: returns the value of `x` raised to the power of `y`)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

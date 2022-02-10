#include "main.h"

int _sqrt_calc(int root, int num);

/**
 * _sqrt_recursion - program startup
 * @n: int being evaluated
(*
 * Description: returns the natural square root of a number)?
 * Return: return (0) is the required function signature
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_calc(1, n));
}

/**
 * _sqrt_calc - program startup
 * @root: first int being evaluated
 * @num: second int being evaluated
(*
 * Description: returns the value of `x` raised to the power of `y`)?
 * Return: return (0) is the required function signature
 */

int _sqrt_calc(int root, int num)
{
	if (root * root == num)
	{
		return (root);
	}
	else if (root * root > num)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_calc(root + 1, num));
	}
}

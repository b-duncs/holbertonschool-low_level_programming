/**
 * factorial - program startup
 * @n: int being evaluated
(*
 * Description: returns the factorial of a given number)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}

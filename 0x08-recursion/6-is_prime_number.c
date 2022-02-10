#include "main.h"

int _prime_calc(int x, int num);

/**
 * is_prime_number - program startup
 * @n: int being evaluated
(*
 * Description: returns `1` if the input integer is a prime number
 * and returns `0` if the input integer is not a prime number)?
 * Return: return (0) is the required function signature
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (_prime_calc(2, n));
}

/**
 * _prime_calc - program startup
 * @x: first int being evaluated
 * @num: second int being evaluated
(*
 * Description: finds if input integer is a prime number)?
 * Return: return (0) is the required function signature
 */

int _prime_calc(int x, int num)
{
	if (num % x == 0)
	{
		return (0);
	}
	if (x == num / 2)
	{
		return (1);
	}
	return (_prime_calc(x + 1, num));
}

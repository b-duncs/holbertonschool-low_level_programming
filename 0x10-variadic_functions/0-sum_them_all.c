/**
 * sum_them_all - program startup
 * @n: int being evaluated
(*
 * Description: returns the sum of all its parameters)?
 * Return: return (0) is the required function signature
 */

#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int string, sum;

	va_start(params, n);

	sum = 0;
	for (string = 0; string < n; string++)
	{
		sum += va_arg(params, int);
	}
	va_end(params);
	return (sum);
}

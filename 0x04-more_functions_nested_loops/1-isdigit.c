/**
 * _isdigit - program startup
 * @c: int being evaluated
(*
 * Description: checks for a digit between `0` and `9`
 * and returns `1` if `c` is a digit between `0` and `9`
 * and returns `0` otherwise)?
 * Return: return (0) exits program successfully, return (1) throws an error
 */

#include "main.h"
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isupper - program startup
 * @c: int being evaluated
(*
 * Description: checks for an uppercase character
 * and returns `1` if `c` is uppercase
 * and returns `0` otherwise)?
 * Return: return (0) exits program successfully, return (1) throws an error
 */

#include "main.h"
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

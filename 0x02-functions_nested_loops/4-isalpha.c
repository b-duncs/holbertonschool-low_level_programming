/**
 * _isalpha - program startup
 * @c: int being evaluated
(*
 * Description: checks for an alphabetic character
 * and returns `1` if `c` is lowercase or uppercase
 * and returns `0` otherwise)?
 * Return: return (0) exits program successfully, return (1) throws an error
 */

#include "main.h"
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

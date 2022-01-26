/**
 * _islower - program startup
 * @c: int being evaluated
(*
 * Description: checks for a lowercase character
 * and returns `1` if `c` is lowercase
 * and returns `0` otherwise)?
 * Return: return (0) exits program successfully, return (1) throws an error
 */

#include "main.h"
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

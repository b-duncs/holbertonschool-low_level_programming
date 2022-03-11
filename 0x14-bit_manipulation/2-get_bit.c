#include "main.h"

/**
 * get_bit - program startup
 * @n: first int being evaluated
 * @index: second int being evaluated
(*
 * Description: returns the value of a bit at a given index)?
 * Return: return (0) is the required function signature
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}

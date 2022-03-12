#include "main.h"

/**
 * clear_bit - program startup
 * @n: first int being evaluated
 * @index: second int being evaluated
(*
 * Description: sets the value of a bit to 0
 * at a given index)?
 * Return: return (0) is the required function signature
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}

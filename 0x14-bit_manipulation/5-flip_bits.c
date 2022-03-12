#include "main.h"

/**
 * flip_bits - program startup
 * @n: first int being evaluated
 * @m: second int being evaluated
(*
 * Description: returns the number of bits you would need
 * to flip to get from one number to another)?
 * Return: return (0) is the required function signature
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}

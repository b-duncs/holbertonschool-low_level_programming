#include "main.h"

/**
 * binary_to_uint - program startup
 * @b: char being evaluated
(*
 * Description: converts a binary number to an unsigned int)?
 * Return: return (0) is the required function signature
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int x = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[x] == '0' || b[x] == '1')
	{
		num <<= 1;
		num += b[x] - '0';
		x++;
	}
	return (num);
}

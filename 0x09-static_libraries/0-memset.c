/**
 * *_memset - program startup
 * @s: pointer being evaluated
 * @b: char being evaluated
 * @n: int being evaluated
(*
 * Description: fills memory with a constant byte)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int byte;

	for (byte = 0; byte < n; byte++)
	{
		s[byte] = b;
	}
	return (s);
}

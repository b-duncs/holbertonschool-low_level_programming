/**
 * *_memcpy - program startup
 * @dest: first pointer being evaluated
 * @src: second pointer being evaluated
 * @n: int being evaluated
(*
 * Description: copies memory area)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int byte;

	for (byte = 0; byte < n; byte++)
	{
		dest[byte] = src[byte];
	}
	return (dest);
}

/**
 * *_strncpy - program startup
 * @dest: first pointer being evaluated
 * @src: second pointer being evaluated
 * @n: int being evaluated
(*
 * Description: copies two strings)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int length;

	for (length = 0; length < n; length++)
	{
		dest[length] = src[length];
		if (src[length] == '\0')
		{
			while (length < n)
			{
				dest[length] = '\0';
				length++;
			}
		}
	}
	return (dest);
}

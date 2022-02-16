/**
 * *_strncat - program startup
 * @dest: first pointer being evaluated
 * @src: second pointer being evaluated
 * @n: first pointer being evaluated
(*
 * Description: concatenates two strings)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
	int length;
	int string;

	for (length = 0; dest[length] != '\0'; length++)
	{
		continue;
	}
	for (string = 0; src[string] && string < n; string++)
	{
		dest[length++] = src[string];
	}
	dest[length] = '\0';
	return (dest);
}

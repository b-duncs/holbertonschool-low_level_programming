/**
 * *_strcat - program startup
 * @dest: first pointer being evaluated
 * @src: second pointer being evaluated
(*
 * Description: concatenates two strings)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
char *_strcat(char *dest, char *src)
{
	int length;
	int string;

	for (length = 0; dest[length] != '\0'; length++)
	{
		continue;
	}
	for (string = 0; src[string] != '\0'; string++)
	{
		dest[length++] = src[string];
	}
	dest[length] = '\0';
	return (dest);
}

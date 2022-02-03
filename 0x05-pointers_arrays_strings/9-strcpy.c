/**
 * *_strcpy - program startup
 * @dest: first pointer being evaluated
 * @src: second pointer being evaluated
(*
 * Description: prints a string followed by a new line
 * to the standard output)?
 * Return: dest
 */

#include "main.h"
char *_strcpy(char *dest, char *src)
{
	int string;

	for (string = 0; src[string] != '\0'; string++)
	{
		dest[string] = src[string];
	}
	dest[string++] = '\0';
	return (dest);
}

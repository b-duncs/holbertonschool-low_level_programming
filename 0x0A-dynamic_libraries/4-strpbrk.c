/**
 * *_strpbrk - program startup
 * @s: first pointer being evaluated
 * @accept: second pointer being evaluated
(*
 * Description: searches a string for any of a set of bytes)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	int byte;
	int string;

	for (byte = 0; *s != '\0'; byte++)
	{
		for (string = 0; accept[string] != '\0'; string++)
		{
			if (*s == accept[string])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

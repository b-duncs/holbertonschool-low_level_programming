/**
 * *_strchr - program startup
 * @s: pointer being evaluated
 * @c: char being evaluated
(*
 * Description: locates a characer in a string)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
char *_strchr(char *s, char c)
{
	int character;

	for (character = 0; s[character] >= '\0'; character++)
	{
		if (s[character] == c)
		{
			return (s + character);
		}
	}
	return (NULL);
}

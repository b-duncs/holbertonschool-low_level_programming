/**
 * _strspn - program startup
 * @s: first pointer being evaluated
 * @accept: second pointer being evaluated
(*
 * Description: gets the length of a prefix substring)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	char *byte = s;
	char *segment;

	while (*s)
	{
		for (segment = accept; *segment; segment++)
		{
			if (*s == *segment)
			{
				break;
			}
		}
		if (*segment == '\0')
		{
			break;
		}
		s++;
	}
	return (s - byte);
}

/**
 * _strcmp - program startup
 * @s1: first pointer being evaluated
 * @s2: second pointer being evaluated
(*
 * Description: compares two strings)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
int _strcmp(char *s1, char *s2)
{
	int string;

	for (string = 0; s1[string] != '\0' && s2[string] != '\0'; string++)
	{
		if (*s1 - *s2 == 0)
		{
			s1++;
			s2++;
		}
	}
	return (*s1 - *s2);
}

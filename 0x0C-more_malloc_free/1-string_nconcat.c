/**
 * *malloc_checked - program startup
 * @s1: first char being evaluated
 * @s2: second char being evalutated
 * n: int being evaluated
(*
 * Description: concatenates two strings)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length;
	unsigned int string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (string = 0; s1[string]; string++)
	{
		length++;
	}
	concat = malloc(sizeof(char) * (length + 1));
	length = 0;
	for (string = 0; s1[string]; string++)
	{
		concat[length++] = s1[string];
	}
	for (string = 0; s2[string] && string < n; string++)
	{
		concat[length++] = s2[string];
	}
	concat[length] = '\0';
	return (concat);
}

/**
 * *string_toupper - program startup
 * @a: pointer being evaluated
 * (*
 * Description: changes all lowercase letters of a string to uppercase)?
 * Return: return (0) is the required function signature
 */

#include "holberton.h"
char *string_toupper(char *a)
{
	int string;

	for (string = 0; a[string] != '\0';)
	{
		if (a[string] >= 'a' && a[string] <= 'z')
		{
			a[string] = a[string] - 32;
		}
		string++;
	}
	return (a);
}

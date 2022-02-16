/**
 * *str_concat - program startup
 * @s1: first pointer being evaluated
 * @s2: second pointer being evaluated
(*
 * Description: concatenates two strings)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
char *str_concat(char *s1, char *s2)
{
	char *array;
	int string;
	int length = 0;
	int concat_string = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (string = 0; s1[string] || s2[string]; string++)
	{
		length++;
	}

	array = malloc(sizeof(char) * length);

	if (array == NULL)
	{
		return (NULL);
	}
	for (string = 0; s1[string]; string++)
	{
		array[concat_string++] = s1[string];
	}
	for (string = 0; s2[string]; string++)
	{
		array[concat_string++] = s2[string];
	}
	return (array);
}

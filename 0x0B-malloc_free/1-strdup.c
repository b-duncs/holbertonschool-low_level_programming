/**
 * *_strdup - program startup
 * @str: char being evaluated
(*
 * Description: returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
char *_strdup(char *str)
{
	char *array;
	unsigned int rand;
	unsigned int strlen = 0;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[strlen])
	{
		strlen++;
	}
	strlen++;

	array = malloc(sizeof(char) * strlen);

	if (array == 0)
	{
		return (NULL);
	}
	for (rand = 0; rand < strlen; rand++)
	{
		array[rand] = str[rand];
	}
	return (array);
}

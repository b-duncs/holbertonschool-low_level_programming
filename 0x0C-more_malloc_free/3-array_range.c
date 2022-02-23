/**
 * *array_range - program startup
 * @min: first int being evaluated
 * @max: second int being evaluated
(*
 * Description: creates an array of integers)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
int *array_range(int min, int max)
{
	int *array;
	int string;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (string = 0; string < size; string++)
	{
		array[string] = min++;
	}
	return (array);
}

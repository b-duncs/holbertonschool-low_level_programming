/**
 * int_index - program startup
 * @array: first int being evaluated
 * @size: second int being evaluated
 * @cmp: function being evaluated
(*
 * Description: searches for an integer)?
 * Return: return (0) is the required function signature
 */

#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
{
	int string;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (string = 0; string < size; string++)
	{
		if (cmp(array[string]) != 0)
		{
			return (string);
		}
	}
	return (-1);
}

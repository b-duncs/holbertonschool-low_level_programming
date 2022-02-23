/**
 * array_iterator - program startup
 * @array: int being evaluated
 * @size: type being evaluated
 * @action: function being evaluated
(*
 * Description: executes a function given as a parameter
 * on each element of an array)?
 * Return: return (0) is the required function signature
 */

#include "function_pointers.h"
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}

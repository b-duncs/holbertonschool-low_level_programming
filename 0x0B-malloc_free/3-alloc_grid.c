/**
 * **alloc_grid - program startup
 * @width: first int being evaluated
 * @height: second int  being evaluated
(*
 * Description: returns a pointer to a two dimensional array of integers)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
int **alloc_grid(int width, int height)
{
	int **array;
	int x;
	int y;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		array[x] = malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			free(array);
			for (y = 0; y <= x; y++)
			{
				free(array[y]);
			}
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			array[x][y] = 0;
		}
	}
	return (array);
}


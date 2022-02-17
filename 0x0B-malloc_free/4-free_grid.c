/**
 * free_grid - program startup
 * @grid: pointer being evaluated
 * @height: int being evaluated
(*
 * Description: frees a two dimensional grid previously created
 * by the `alloc_grid` function)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void free_grid(int **grid, int height)
{
	int x;
	
	for(x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}

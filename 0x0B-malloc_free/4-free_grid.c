#include "main.h"

/**
 * free_grid - frees tew (2) dimensional grid
 * @grid: dimensional grid
 * @height: height of the array
 *
 * Return: a pointer to a two (2) dimensional array of integers
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (a = height - 1; a >= 0 ; a--)
	{
		free(grid[a]);
	}
	free(grid);
}

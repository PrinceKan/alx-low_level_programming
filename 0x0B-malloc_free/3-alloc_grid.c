#include "main.h"

/**
 * alloc_grid - returns a pointer to a two (2) dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to a two (2) dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int a, b, **net;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}

	net = malloc(sizeof(int *) * height);

	if (net == 0)
	{
		return (NULL);
	}
	for (a = 0 ; a < height ; a++)
	{
		net[a] = malloc(sizeof(int) * width);
		if (net[a] == 0)
		{
			for (a = a - 1; a >= 0 ; a--)
			{
				free(net[a]);
			}
			free(net);
			return (NULL);
		}
		for (b = 0 ; b < width ; b++)
		{
			net[a][b] = 0;
		}
	}
	return (net);
}

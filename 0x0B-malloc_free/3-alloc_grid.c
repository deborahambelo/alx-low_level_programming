#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: takes in width of grid
 * @height: height of grid
 * Return: grid with freed spaces
 */
int **alloc_grid(int width, int height)
{
	int **ipp;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ipp = (int **)malloc(height * sizeof(int *));
	if (ipp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ipp[i] = (int *)malloc(width * sizeof(int));
		if (ipp[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ipp[j]);
			}
			free(ipp);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ipp[i][j] = 0;
		}
	}
	return (ipp);
}

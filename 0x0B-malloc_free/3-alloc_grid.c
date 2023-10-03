#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: array width
 * @height: array height
 *
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **da;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	da = (int **)malloc(height * sizeof(int *));
	if (da == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		da[i] = (int *)malloc(width * sizeof(int));
		if (da[i] == NULL)

		{
			for (j = 0; j < i; j++)
			{
				free(da[j]);
			}
			free(da);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			da[i][j] = 0;
		}
	}
		return (da);
}

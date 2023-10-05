#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range -  function that creates an array of integers
 * @min: min integer
 * @max: max integer
 * Return: 0 success
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *result;

	if (min > max)
	{
		return (NULL);
	}

	i = max - min + 1;

	result = (int *)malloc(sizeof(int) * i);

	if (result == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
	result[j] = min + j;
	}
	return (result);
}

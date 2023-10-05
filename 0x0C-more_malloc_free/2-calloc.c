#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: inout value
 * @size: siz of memory
 *
 * Return: 0 success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	size_t total_size = (size_t)nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, total_size);

	return (ptr);
}

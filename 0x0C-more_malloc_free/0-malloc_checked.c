#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - fuction that allocates memory using mallloc
 * @b: value to be stored
 *
 * Return: 0 success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

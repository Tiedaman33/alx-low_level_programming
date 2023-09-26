#include <stdio.h>
#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: desired value;
 * @n: number of bytes to fill
 *
 * Return: changed array with new value of n bytes
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (unsigned int i = 0; i < n; i++)
	{
		*p = b;
		p++;
	}
	return (s);
}

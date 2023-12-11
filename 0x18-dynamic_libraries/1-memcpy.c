#include "main.h"
/**
 * _memcpy - a fucntion that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r = 0;

	while (r < n)
	{
		dest[r] = src[r];
		r++;
	}
	return (dest);
}

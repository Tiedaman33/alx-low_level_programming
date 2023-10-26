#include "main.h"
/**
 * get_endianness - check the endianess
 *
 * Return: 0 if big, 1 if endian
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}

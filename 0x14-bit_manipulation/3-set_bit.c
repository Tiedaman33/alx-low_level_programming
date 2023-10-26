#include "main.h"
/**
 * set_bit - set bit to 1 and index
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if sucess or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}

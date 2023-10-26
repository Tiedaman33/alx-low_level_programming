#include "main.h"
/**
 * flip_bits - counts the number of bits chnage
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to chnage
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exc = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exc >> a;
		if (current & 1)
			countbit;
	}
	return (countbit);
}

#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - prints number
 * @n: number of input variables
 * @...: number of unnamed variables
 * Return: 0 success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list or;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(or, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(or, int);
	}
	va_end(or);
	return (sum);
}



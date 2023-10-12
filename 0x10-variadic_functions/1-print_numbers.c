#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of intergers passsed to the function
 * @...: a avaraible of numbers to be printed
 * Return: 0 success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

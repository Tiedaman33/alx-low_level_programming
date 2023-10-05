#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - function that concats two strings
 * @s1: first input string
 * @s2: input string
 * @n: input int
 * Return: 0 success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	result = (char *)malloc(strlen(s1) + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}

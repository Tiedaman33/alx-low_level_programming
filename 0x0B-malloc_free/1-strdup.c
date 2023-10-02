#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: input string
 *
 * Return: return pointer
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = (char *)malloc(strlen(str) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}

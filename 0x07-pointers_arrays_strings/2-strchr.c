#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locates a charater in a string
 * @s: pointer to the string to search
 * @c: characters to locate
 *
 * Return: pointer to the first occurence of cin s or null if not found
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	for (; s[k] >= '\0'; k++)
	{
		if  (s[k] == c)
			return (&s[k]);
	}
	return (NULL);
}

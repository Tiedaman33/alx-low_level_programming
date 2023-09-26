#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to string containing to searched for
 *
 * Return: always retun 0 sucess
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
		if (*s == accept[j])
			return (s);
		}
	s++;
	}
	return ('\0');
}

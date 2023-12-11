#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: string containng charatcters to match
 *
 * Return: number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				count++;
				break;
			}
			temp++;
		}
		if (*temp == '\0')
		{
			break;
			s++;
		}
	}
		return (count);
}

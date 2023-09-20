#include "main.h"
#include <stdio.h>
/**
 * _strcat-concats two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return void
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest; /*store the oringinal destination address for returning*/

	/*move 'dest' pointer to end of string*/
	while (*dest != '\0')
	{
		dest++;
	}

	/*copy character from 'src' to 'dest'*/
	while (*src != '\0')
	{
		dest++;
		src++;
	}
	dest = '\0'; /*add the terminating null byte*/

	return (result);
}

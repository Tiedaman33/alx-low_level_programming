#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - function that concatenates all the arguments
 * @ac: argcouunt
 * @av: argvector
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int position = 0;
	char *m;
	int total_length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	m = (char *)malloc(total_length + 1);
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(m + position, av[i]);
		position += strlen(av[i]);
		m[position++] = '\n';
	}
	m[position] = '\0';

	return (m);
}

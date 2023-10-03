#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#define MAX_WORDS 100
/**
 * strtow - function that splits a string into words
 * @str: str to be split
 *
 * Return: always 0 success
 */
char **strtow(char *str)
{
	int word_count = 0;
	char *token;
	char **warray;
	int i;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	warray = (char **)malloc((MAX_WORDS + 1) * sizeof(char *));
	if (warray == NULL)
	{
		return (NULL);
	}

	token = strtok(str, "");

	while (token != NULL && word_count < MAX_WORDS)
	{
		warray[word_count] = strdup(token);
		if (warray[word_count] == NULL)
		{
			for (i = 0; i < word_count; i++)
			{
				free(warray[i]);
			}
			free(warray);
			return (NULL);
		}
		token = strtok(NULL, "");
		word_count++;
	}
	warray[word_count] = NULL;
	return (warray);
}

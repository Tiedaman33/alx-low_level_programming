#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - the main function
 * @argc:  argument
 * @argv: argument
 * Return: 0 if success and 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *input = argv[i];

		for (j = 0; input[j] != '\0'; j++)
		{
			if (!isdigit(input[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(input);
	}
		printf("%d\n", sum);
		return (0);
}

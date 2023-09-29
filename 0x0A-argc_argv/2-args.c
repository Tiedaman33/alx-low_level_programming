#include <stdio.h>
#include "main.h"
/**
 * main - function that print arguments
 * @argc: argument
 * @argv: argument
 * Return: always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

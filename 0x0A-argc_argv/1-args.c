#include <stdio.h>
#include "main.h"
/**
 * main - function that prints args
 * @argc: argument
 * @argv: argument
 * Return: always 0(success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

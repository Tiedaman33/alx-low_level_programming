#include <stdio.h>
/**
 * main - fucntion that prints name followed by a new line.
 * @argc: argument
 * @argv: argument
 * Return: always 0 (sucess)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("unable to determine program name. \n");
	}
	return (0);
}

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * is_valid_input - program that multiplies two positive numbers
 * @num_str: input string
 * Return: 0 success
 */
int is_valid_input(const char *num_str)
{
	while (*num_str)
	{
		if (!isdigit(*num_str))
		{
			return (0);
		}
		num_str++;
	}
	return (1);
}
/**
 * multiply - multiplies two integers
 * @num1: first interger
 * @num2: second integer
 * Return: the result of multiplication
 */
int multiply(int num1,int num2)
{
	return (num1 * num2);
}

/**
 * main -  main function
 * @argc: number of args
 * @argv: args array
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	char *num1_str = argv[1];
	char *num2_str = argv[2];

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!is_valid_input(num1_str) || !is_valid_input(num2_str))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	result = multiply(num1, num2);

	printf("%d\n", result);
	return (0);
}

#include <stdio.h>
/**
 *main - Entry point
 *Description: 'print alphabets lowercase'
 *Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	return (0);
}

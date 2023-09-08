#include <stdio.h>
/**
 *main - Entry point
 *Description: 'check for number if it is postive or negative'
 *Return: always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

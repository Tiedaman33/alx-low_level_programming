#include <stdio.h>
/**
 *main - Entry point
 *Description: 'print alpha lowercase and uppercase'
 *Return: always 0
 */
int main(void)
{
	int m = 97;

	while (m <= 122)
	{
		if (m == 101 || m == 113)
		{
			m++;
			continue;
		}
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}

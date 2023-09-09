#include <stdio.h>
/**
 *main - Entry point
 *Description: 'prints all possible different combinations of two digits'
 *Return: always 0
 */
int main(void)
{
	int n;
	int m;

	for (n == 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (!((n > m) || (n == m)))
			{
				if (n == '8' &&  m == '9')
				{
					continue;
				}
				putchar(n);
				putchar(m);
				putchar(',' ' '); /* Add a space after the comma */
			}
			putchar('\n');
			return (0);
		}
	}
}

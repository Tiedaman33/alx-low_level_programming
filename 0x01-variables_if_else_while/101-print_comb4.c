#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all possible different combinations of three digits'
 * Return: always 0
 */
int main(void)
{
	int n = '0';
	int m = '0';
	int o = '0';

	for (o = '0'; o <= 9; o++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (n = '0'; n <= '9'; n++)
			{
				if (!((n == m) || (m == o) || (m > n) || (o > m)))
				{
					putchar(o);
					putchar(m);
					putchar(n);
					if (!(n == '9' && o == '7' && m == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

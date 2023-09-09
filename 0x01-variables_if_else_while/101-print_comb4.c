#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all possible different combinations of three digits'
 * Return: always 0
 */
int main(void)
{
	int h, t, o;

	for (h = 48; h <= 58; h++)
	{
		for (t = 49; t <= 58; t++)
		{
			for (o = 50; o <= 58; o++)
			{
				if (o > t && t > h)
				{
					putchar(h);
					putchar(t);
					putchar(o);
					if (h != 55 && t != 56)
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

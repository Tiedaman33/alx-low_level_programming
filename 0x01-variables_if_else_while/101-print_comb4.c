#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all possible different combinations of three digits'
 * Return: always 0
 */
int main(void)
{
	int h, t, o;

	for (h = 48; h <= 57; h++)
	{
		for (t = h + 1; t <= 57; t++)
		{
			for (o = t + 1; o <= 57; o++)
			{
				if (!(o == t ||  t == h || (t > o) || (h > t)))
				{
					putchar(h);
					putchar(t);
					putchar(o);
					if (!(o == 57 && h == 55 && t == 56))
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

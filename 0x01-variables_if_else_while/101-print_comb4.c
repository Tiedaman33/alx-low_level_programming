#include <stdio.h>
/**
 *main - Entry point
 *Description: 'check for number if it is postive or negative'
 *Return: always 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			for (k = 0; k <= 9; k++)
				if ((i < j) && (j < k))
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (k != 9 || j != 8 || i != 7)
						putchar(44);
					putchar(32);
				}
	putchar('\n');
	return (0);
}

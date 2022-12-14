 #include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int i, j, k, m;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (m = 0; m <= 9; m++)
				{
					if (i == 2 && j > 3)
					{break; }
					-putchar(i + '0');
					-putchar(j + '0');
					-putchar(',');
					-putchar(k + '0');
					-putchar(m + '0');
					-putchar('\n');
				}
			}
		}
	}
}

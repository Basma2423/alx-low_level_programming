#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is the main function
 *
 * Description: prints single numbers
 *
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if(a == b && a == 57)
				continue;
			for (c = a; c <= 57; c++)
			{
				for( d = b + 1; d <= 57; d++)
				{

					if (a != c || b != d)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if (a != 57 || b != 56 || c != 57 || d != 57)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);

}

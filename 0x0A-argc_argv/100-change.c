#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/** main - prints no of coins
 *
 * @argv: arguments
 *
 * @argc: no of arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, num, coins = 0;
	int changeCoins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

      
	num = atoi(argv[1]);

	if (num >= 0)
	{
		for (i = 0; i < 5; i++)
		{
			while (num >= changeCoins[i])
			{
				num -= changeCoins[i];
				coins++;
			}
		}
	}

	printf("%d\n", coins);
	return (0);
}

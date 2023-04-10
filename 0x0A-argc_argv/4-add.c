#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * check_num - check a string
 *
 * @s: array of sring
 *
 * Return: 0
 */
int check_num(char *s)
{
	unsigned int count = 0;

	while (count < strlen(s))
	{
		if (!isdigit(s[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - print sum of the arguments
 *
 * @argv: arguments
 *
 * @argc: no of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 1, sum = 0;

	while (count < argc)
	{
		if (check_num(argv[count]) == 1)
			sum += atoi(argv[count]);
		else
		{
			printf("Error\n");
			return (1);
		}

	count++;
	}

	printf("%d\n", sum);

	return (0);


}

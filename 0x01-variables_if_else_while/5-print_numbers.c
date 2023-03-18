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
	int a = 48;

	while (a <= 57)
		putchar(a++);
	putchar('\n');

	return (0);

}

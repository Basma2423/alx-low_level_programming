#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is the main function
 *
 * Description: prints the alphabet lowercase letters
 *
 * Return: 0
 */
int main(void)
{
	int a = 96;

	while (++a <= 122)
		if (a != 101 && a != 113)
			putchar(a);
	putchar('\n');

	return (0);

}

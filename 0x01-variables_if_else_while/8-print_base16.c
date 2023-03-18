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
	int a = 48;

	while (a <= 102)
	{
		if (a == 58)
			a = 97;
		putchar(a++);
	}
	putchar('\n');

	return (0);

}

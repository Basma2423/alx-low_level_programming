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
	int a = 97;

	while (a <= 122)
		putchar(a++);
	putchar('\n');

	return (0);

}

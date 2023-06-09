#include "stdio.h"
#include "main.h"

/**
 * main - prints the name of the program
 *
 * @argv: array of arguments
 *
 * @argc: size of argv
 *
 * Return: 0 as usual
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

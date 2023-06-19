#include "_putchar.c"

/**
 * main - main function
 *
 * description: prints the current file name
 *
 * Return: 0
 */
int main(void)
{
	char *filename = __FILE__;
	int len = 0;

	while (filename[len] != '\0')
	{
		_putchar(filename[len++]);
	}
	_putchar('\n');

	return (0);
}

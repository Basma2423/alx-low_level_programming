#include "variadic_functions.h"

/**
 * print_strings - obvious
 *
 * @separator: const char
 * @n: const unsigned int
 * @...: a variable number of parameters passed
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *word;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(ap, char *);
		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}

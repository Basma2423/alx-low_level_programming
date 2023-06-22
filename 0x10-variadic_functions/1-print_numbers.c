#include "variadic_functions.h"

/**
 * print_numbers - obvious
 *
 * @separator: const char
 * @n: const unsigned int
 * @...: a variable number of parameters passed
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	printf("%i", va_arg(ap, int));

	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s", separator);
		printf("%i", va_arg(ap, int));
	}

	va_end(ap);
	printf("\n");
}

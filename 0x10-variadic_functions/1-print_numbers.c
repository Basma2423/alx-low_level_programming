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


	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}

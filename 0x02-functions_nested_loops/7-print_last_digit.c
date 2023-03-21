#include "main.h"

/**
 *
 * print_last_digit - print last digit
 *
 * @num: parameter printed
 *
 * Description: print last digit
 *
 * Return: last digit
 */
int print_last_digit(int num)
{
	int k;

	k = num % 10;

	if (k < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}

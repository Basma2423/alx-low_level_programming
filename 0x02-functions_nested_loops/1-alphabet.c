#include "main.h"

/**
 * print_alphabet - a void function
 *
 * Description: prints the alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

}

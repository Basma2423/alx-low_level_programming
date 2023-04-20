#include "function_pointers.h"

/**
 * print_name - takes a string and a function and applies the function on it
 *
 * @name: string
 *
 * @f: a function should be applied to name string
 *the function does something to the string
 *
 * This function applies the given function to each character in name st
 *
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

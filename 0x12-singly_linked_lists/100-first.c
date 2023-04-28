#include <stdio.h>

void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - executed before main function
 *
 * Return 0
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my");
	printf("house upon my back!\n");
}

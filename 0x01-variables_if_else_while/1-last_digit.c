#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is the main function
 *
 * Description: Print the last digit of a number
 *
 * Return: 0 as usual
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;
	printf("Last digit of %i is %i and is ", n, l);

	if (l > 5)
		printf("greater than 5");
	else if (l == 0)
		printf("0");
	else
		printf("less than 6 and not 0");
	printf("\n");
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - this is the main funciton
 *
 * Description: print a random number and if it was positive, negative or zero
 *
 * Return: number  is (positive, negative, zero)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%i ", n);
	if (n < 0)
		printf("is negative");
	else if (n == 0)
		printf("is zero");
	else
		printf("is postive");

	printf("\n");
	return (0);
}

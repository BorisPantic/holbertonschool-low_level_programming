#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints last digit of the n var.
 * return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	n %= 10;
	if (n > 5)
		printf(" %d and is greater than 5\n", n);
	if (n == 0)
		printf(" %d and is 0\n", n);
	if (n < 6 && n != 0)
		printf(" %d and is less than 6 and not 0\n", n);
	return (0);
}
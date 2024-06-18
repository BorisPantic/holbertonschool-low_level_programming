#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - prints if n is positive, negative or is equal to zero.
 * Return:0
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0 ){
		printf("is positive");
	}
	else if(n > 0 ){
		printf("is negative");
	}
	else(n = 0){
		printf("is zero");
	}
	return (0);
}

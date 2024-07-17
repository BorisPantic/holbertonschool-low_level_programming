#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - calculate what the user is sending in argument
 *@argc: number of argument
 *@argv: string of argument
 *Return:0
 */

int main(int argc, char **argv)
{
	int number1, number2, calcul;
	char *operator;

	if (argc > 4)
	{
		exit(98);
	}

	operator = argv[2];
	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);
	calcul = (*get_op_func(operator))(number1, number2);
	printf("%d\n", calcul);
	return (0);
}

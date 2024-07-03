#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of argument with argc
 * @argc: number of argument
 * @argv: void
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

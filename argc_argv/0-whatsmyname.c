#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print argv[0] --> name of the program
 * @argv: 0 so the name
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

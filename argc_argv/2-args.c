#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all argument string with argv
 * @argc: void
 * @argv: argument to print
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n"
			, argv[0], argv[1], argv[2], argv[3], argv[4], argv[5], argv[6], argv[7]);
	return (0);
}

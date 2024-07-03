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
	int a;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (a = 0; a < argc; a++)
		{
			printf("%s\n", argv[a]);
		}
	}
	return (0);
}

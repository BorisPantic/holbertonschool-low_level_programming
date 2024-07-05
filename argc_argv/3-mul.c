#include <stdio.h>
#include <stdlib.h>

/**
 *main- prints the number of arguments
 *@argc: argument count
 *@argv:array of pointers to strings
 *Return: 0
 */

int main(int argc, char **argv)
{
	int v1 = 0, v2 = 0, r = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		v1 = atoi(argv[1]);
		v2 = atoi(argv[2]);
		r = (v1 * v2);
		printf("%d\n", r);
	}
	return (0);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *string_nconcat - function that concatenate two string
 *@s1: string one
 *@s2: string two
 *@n: max bytes for s2
 *Return: NULL or result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int i2;
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	if (n >= l2)
		n = l2;

	result = malloc(sizeof(char) * (l1 + n + 1));

	for (i = 0; i < l1; i++)
	{
		result[i] = s1[i];
	}
	for (i2 = 0; i2 < n; i2++)
	{
		result[l1 + i2] = s2[i2];
	}
	result[l1 + n] = '\0';
	return (result);
}

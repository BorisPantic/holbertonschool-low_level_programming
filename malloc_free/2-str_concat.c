#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *str_concat - concatenate two string
 *@s1: string 1
 *@s2: sring 2
 *Return: NULL or concatenate string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int l1;
	int l2;
	char *concatstr;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{	
		s1 = "";
	}
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	concatstr = malloc(sizeof(char) * (l1 + l2 + 1));
	if (concatstr == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		concatstr[i] = s1[i];
	for (i = 0; i < l2; i++)
		concatstr[i + l1] = s2[i];

	concatstr[l1 + l2] = '\0';

	return (concatstr);
}
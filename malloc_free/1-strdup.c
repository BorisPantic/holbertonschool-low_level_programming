#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that  return pointer to new allocate memory
 *@str: string
 *Return: null or s
 */

char *_strdup(char *str)
{
	char *s = 0; /* pointer to main function */
	int i = 0; /* i = index */
	int l = 0; /* l = lenght */

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	s = malloc(sizeof(char) * l + 1);

	if (s == NULL)
		return (NULL);
	for (; i <= l; i++)
	{
		s[i] = str[i];
	}
	return (s);
}

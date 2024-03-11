#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - dublicate
 * @str: string
 * Return: copy of string
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + i))
		i++;

	s = malloc(sizeof(char) * i + 1);

	if (s == NULL)
		return (NULL);

	while (j < i)
	{
		s[j] = *(str + j);
		j++;
	}

	s[i] = '\0';
	return (s);
}

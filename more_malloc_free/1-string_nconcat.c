#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - first and n elements of 2nd str
 * @s1: first string
 * @s2: second string
 * @n: count of elements from 2nd string
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, k = 0;
	char *ham;

	while (*(s1 + i))
	{
		i++;
	}
	if (*s2 != 0)
	{
		while (*(s2 + j))
		{
			j++;
		}
	}
	ham = malloc(sizeof(char) * (i + j) + 1);

	if (j - n > 0)
	{
		while (k < i)
		{
			*(ham + k) = *(s1 + k);
			k++;
		}
		while (k < (i + n))
		{
			*(ham + k) = *(s2 + k - i);
			k++;
		}
	}
	else
	{
		while (k < i)
		{
			*(ham + k) = *(s1 + k);
			k++;
		}
	}
	return (ham);
}

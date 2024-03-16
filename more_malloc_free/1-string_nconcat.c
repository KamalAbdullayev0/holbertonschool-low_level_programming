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
	unsigned int i = 0, j = 0, k = 0;
	char *ham;

	while (*(s1 + i))
	{
		i++;
	}
	while (*(s2 + j))
	{
		j++;
	}
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
	{
		s1 = 0;
		s2 = 0;
		return (0);
	}
	if (n >= j)
		n = j;
	ham = malloc(sizeof(char) * (i + j) + 1);
	if (ham == NULL)
		return (NULL);
	while (k < (i + n))
	{
		if (k < i)
			*(ham + k) = *(s1 + k);
		else
			*(ham + k) = *(s2 + k - i);
		k++;
	}
	ham[k] = '\0';
	return (ham);
}

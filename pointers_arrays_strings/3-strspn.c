#include "main.h"
/**
 * _strspn - does smth strange
 * @s: string
 * @accept: string2
 *
 * Return: un
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (*(s) != 32)
	{
		while (*(accept + j) != '\0')
		{
			if (*(s) == *(accept + j))
			{
				k++;
			}
			j++;
		}
		s++;
		j = 0;
	}

	return (k);
}

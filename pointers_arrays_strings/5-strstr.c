#include "main.h"
#include <stdio.h>

/**
 * *_strstr - check the code
 * @haystack: longer string
 * @needle: substring
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int a = 0;


	while (*haytack)
	{
		while (*(needle + i))
		{
			if (*(haytack + i) == *(needle + i))
				i++;
		}
		haytack++;
		return (haytack);
	}
	return (NULL);
}

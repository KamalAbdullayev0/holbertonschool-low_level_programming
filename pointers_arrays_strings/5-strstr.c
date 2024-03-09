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


	while (*haystack)
	{
		while (*(needle + i))
		{
			if (*(haystack + i) == *(needle + i))
				i++;
		}
		haystack++;
		return (haystack);
	}
	return (NULL);
}

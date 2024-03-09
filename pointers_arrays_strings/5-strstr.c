#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strstr - check the code
 * @haystack: longer string
 * @needle: substring
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int counter = 0;
	int len = strlen(needle);

	while (*(haystack) != '\0')
	{
		while (*(needle + i) != '\0')
		{
			if (*(haystack + i) == *(needle + i))
				counter++;
			i++;
		}
		i = 0;
		if (counter == len)
			return (haystack);
		counter = 0;
		haystack++;
	}
	return (NULL);
}

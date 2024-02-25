#include "main.h"
/**
 * _isalpha - Entry point
 * @c: variable
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if(c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (65 <= c && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

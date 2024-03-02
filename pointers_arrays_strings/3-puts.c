#include "main.h"

/**
 * _putchar - prints str
 * @str: char
 * Return: just a return
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

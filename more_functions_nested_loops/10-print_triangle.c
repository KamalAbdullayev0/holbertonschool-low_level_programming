#include "main.h"
/**
 * print_triangle - function that prints a triangle
 *
 * Return: triangle
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i < size ; i++)
	{

		for (j = 0; j <= (size - (i + 2)); j++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
                {
                        _putchar(23);
                }
		_putchar('\n');

	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_diagonal - checks
 * @n: times
 *
 * Return: 1 if upper, otherwise 0
 */
void print_diagonal(int n)
{
	int j = 0;
	int i = 0;
	while (i <= n)
	{
	i++;
	j = 0;
		while (j < n)
		{	
			if (n != 0)
			{
				_putchar(' ');
			}
		j++;
		}
	_putchar(92);
	_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}


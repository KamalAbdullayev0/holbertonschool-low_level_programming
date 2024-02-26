#include "main.h"
/**
 * more_numbers - A function that prints 10 times the numbers 0 to 14
 * @a: Variable
 * Return: function value
 */

void more_numbers(void)
{
	int a = 0;
	int b = 0;
	while (a < 10)
	{
		while(b < 15)
		{
			_putchar(b + '0');
		}
	b = 0;
	a++;
	}
}

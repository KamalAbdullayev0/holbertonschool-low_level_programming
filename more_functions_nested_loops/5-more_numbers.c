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
	while (a < 15)
	{
		b = a * 10;
		if (b > 100)
                {
                        _putchar(1 + '0');
		}
		if (b > 10)
		{
			_putchar(b / 10 + '0')
		}
		if (b < 10)
                {
                        _putchar(b + '0');
                }
	a++;
	}
}

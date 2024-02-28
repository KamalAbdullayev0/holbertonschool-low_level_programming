#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @tas: Variable
 * Return Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int tas;

	tas = *a;
	*a = *b;
	*b = tas;
}


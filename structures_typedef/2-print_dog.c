#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: dog structure
 * Return: none
 */
void print_dog(struct dog *d)
{
	 if (d == NULL)
		 return;
	printf("Name: ");
	if (d->name == name)
	{
		printf("%s\n", (*d).name);
	}
	else
		printf("%s\n", "(nil)");
	printf("Age: ");
	if ((*d).age == age)
	{
		printf("%f\n", (*d).age);
	}
	else
		printf("%s\n", "(nil)");
	printf("Owner: ");
	if ((*d).owner == owner)
	{
		printf("%s\n", (*d).owner);
	}
	else
		printf("%s\n", "(nil)");
}

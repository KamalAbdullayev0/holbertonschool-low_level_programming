#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize valuse to dog
 * @d: dog structure
 * @name: name of dog
 * @age: age of th dog
 * @owner: owner of the dog
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
		printf("%s\n", (*d).age);
	}
	else
		printf("%s\n", "(nil)");
	printf("Owner: ");
	if ((*d).owner == owner)
	{
		printf("%s\n", (*d).owner);
	}
	else
		printf("%s\n", "(nil)";
}

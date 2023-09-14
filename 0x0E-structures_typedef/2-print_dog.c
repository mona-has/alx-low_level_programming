#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_dog - entry point
*
* @d: input
*
* Return: always 0
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
		printf("Age: %f\n", d->age);
	}
}

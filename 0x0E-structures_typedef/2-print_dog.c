#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - Prints attributes of `d` dog. Prints "(nil)" if attribute has no
 * value
 * @d: Pointer to instance of struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		d->name = "(nil)";
	if ((*d).owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

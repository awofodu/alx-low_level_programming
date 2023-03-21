#include <stdio.h>
#include "dog.h"
void print_dog(struct dog *d);

/**
 * struct dog - Write a function that initialize a variable of type struct dog
 *
 */

void print_dog(struct dog *d)
{
  if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
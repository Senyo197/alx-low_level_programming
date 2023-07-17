#include "dog.h"

/**
  *free_dog - free memory allocated for dog
  *@d: pointer to dogs
  */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

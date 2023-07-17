#include "dog.h"

/**
  *new_dog - create function for a new dog
  *@name: name of the dog
  *@age: age of the dog
  *@owner: owner of the dog
  *Return: pointer to the new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nwDog = malloc(sizeof(dog_t));

	if (nwDog == NULL)
	{
		return (NULL);
	}

	nwDog->name = malloc(strlen((name) + 1));
	nwDog->owner = malloc(strlen((owner) + 1));

	if (nwDog->name == NULL || nwDog->owner == NULL)
	{
		free(nwDog->name);
		free(nwDog->owner);
		free(nwDog);

		return (NULL);
	}

	strcpy(nwDog->name, name);
	strcpy(nwDog->owner, owner);
	nwDog->age = age;

	return (nwDog);
}

#ifndef DOG_H
#define DOG_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
  *struct dog - structure representing a dog
  *@name: name of the dog
  *@age: age of the dog
  *@owner: dog owner
  *@dog_t - newly defined name for dog
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

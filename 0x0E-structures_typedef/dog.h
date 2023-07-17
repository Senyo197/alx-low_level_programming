#ifndef DOG_H
#define DOG_H

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

#endif /* DOG_H */

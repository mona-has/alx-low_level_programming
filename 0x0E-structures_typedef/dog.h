#ifndef DOG_H
#define DOG_H

/**
* struct dog - entry point
*
* @name: input
* @age: input
* @owner: input
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
void free_dog(dog_t *d);
#endif

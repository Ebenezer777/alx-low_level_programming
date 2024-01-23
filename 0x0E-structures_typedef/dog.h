#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - initializes a variable of type struct dog
 *
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initializes
 *
 * Description: first struct with alx
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
#endif

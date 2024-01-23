#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - initializes a variable of type struct dog
 *
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initializes
 *
 * Desc: first struct with alx
 */

/**
 * dog_t - new name for struct dog
 */

typedef struct dog dog_t;


struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

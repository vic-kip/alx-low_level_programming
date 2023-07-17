#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains the dog's basic data
 * @name: first parameter
 * @age: Second parameter
 * @owner: final parameter
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void print_dog(struct dog *d);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

#endif

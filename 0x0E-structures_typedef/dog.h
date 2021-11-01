#ifndef DOG
#define DOG
/**
 * struct dog - define a struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

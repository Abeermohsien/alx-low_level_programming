#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structer
 * @name: name of the structure
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

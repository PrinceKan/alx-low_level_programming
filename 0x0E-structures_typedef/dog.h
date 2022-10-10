#ifndef rex
#define rex
/**
 * struct dog - define a new type of struct
 * @name: dog's name
 * @age: dog's age 
 * @owner:dog's owner
 *
 */
typedef struct dog
{
        char *name;
        float age;
        char *owner;
}
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif

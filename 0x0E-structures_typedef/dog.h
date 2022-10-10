#ifndef DOG_H
#define DOG_H
/*Structs*/
/**
 * struct dog - contains data for dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*Typedefs*/
typedef struct dog dog_t;
#endif

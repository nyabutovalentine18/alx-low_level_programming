#ifndef STRUCT_H
#define STRUCT_H

/**
*struct dog - holds main information
*@name: First element
*@age: second element
*@owner: third element
*
*Description: longer description
*/
struct dog
{
char *name;
float age;
char *owner;
};

/**
*dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*dog*/

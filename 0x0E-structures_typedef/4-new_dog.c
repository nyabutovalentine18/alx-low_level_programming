#include "dog.h"
#include <stdlib.h>

/**
*_strlen - checks the length of the strings
*@s: string
*
*Return: string length
*/

int _strlen(char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
*_strcpy - copies strings from src to dest
*@src: string source
*@dest: string destination
*
*Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int len, i;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

/**
**new_dog - creates a new dog
*@name: first element
*@age: seconf element
*@owner: third element
*
*Return: pointer to the new dog if successful, otherwise NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1;
int len2;

len1 = _strlen(name);
len2 = _strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
(*dog).name = malloc(sizeof(char) * (len1 + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
(*dog).owner = malloc(sizeof(char) * (len2 + 1));
if ((*dog).owner == NULL)
{
free(dog);
free((*dog).name);
return (NULL);
}
_strcpy((*dog).name, name);
_strcpy((*dog).owner, owner);
(*dog).age = age;
return (dog);
}

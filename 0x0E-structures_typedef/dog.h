#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Structure of a dog
  * @name: name of dog
  * @age: age of dog
  * @owner:  owner of dog
  * Description: This struct is for dog
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);

#endif /*DOG_H*/

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type describing a dog
 * @name: name of the dog, type = char *
 * @age: age of the dog, type = float
 * @owner: owner of the dog, type = char *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */

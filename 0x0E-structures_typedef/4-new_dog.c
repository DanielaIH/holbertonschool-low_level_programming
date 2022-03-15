#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{

	int count_len = 0;

	while (*s != '\0')
	{
		count_len++;
		s++;
	}

	return (count_len);
}

/**
 * _strcpy - function that copies the string
 * @dest: pointer to string destiny
 * @src: pointer to string to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];

	}
	dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - ID dog
 * @name: new name dog
 * @age: new age of the dog
 * @owner: new owner of the dog
 * Return: data of the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->age = age;
	if (name != NULL)
	{
		new_name = malloc(sizeof(char) * _strlen(name) + 1);
		if (new_name == NULL)
		{
			free(newdog);
			return (NULL);
		}
		newdog->name = _strcpy(new_name, name);
	}
	else
	{
		newdog->name = NULL;
	}
	if (owner != NULL)
	{
		new_owner = malloc(sizeof(char) * _strlen(owner) + 1);
		if (new_owner == NULL)
		{
			free(new_name);
			free(newdog);
			return (NULL);
		}
		newdog->owner = _strcpy(new_owner, owner);
	}
	else
	{
		newdog->owner = NULL;
	}
	return (newdog);
}

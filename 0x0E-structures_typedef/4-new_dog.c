#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
/**
 * _strlen - prints the length of the string
 * @s: character
 * Return: it return length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * new_dog -  function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new_dog_ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog_ptr;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	new_dog_ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr);
		free(new_dog_ptr->name);
		return (NULL);

	_strcpy(new_dog_ptr->name, name);

	_strcpy(new_dog_ptr->owner, owner);

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}

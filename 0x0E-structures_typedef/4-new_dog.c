/**
 * *new_dog - program startup
 * @name: first char being evaluated
 * @owner: second char being evaluated
 * @age: float being evaluated
(*
 * Description: creates a new dog)?
 * Return: return (0) is the required function signature
 */

#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, *cpyowner;
	int namelen;
	int ownerlen;
	int i;
	int x;

	for (namelen = 0; name[namelen] != '\0'; namelen++);
	{
		namelen++;
	}
	for (ownerlen = 0; owner[ownerlen] != '\0'; ownerlen++);
	{
		ownerlen++;
	}
	cpyname = malloc(sizeof(char) * namelen);
	if (cpyname == NULL)
	{
		return (NULL);
	}
	cpyowner = malloc(sizeof(char) * ownerlen);
	if (cpyowner == NULL)
	{
		free(cpyname);
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(cpyname);
		free(cpyowner);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
	{
		cpyname[i] = name[i];
	}
	for (x = 0; x < ownerlen; x++)
	{
		cpyowner[x] = owner[x];
	}
	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;
	return (new_dog);
}

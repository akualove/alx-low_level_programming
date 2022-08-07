#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int test;

	for (test = 0; *s != '\0'; ++s)
		++test;

	return (test);
}

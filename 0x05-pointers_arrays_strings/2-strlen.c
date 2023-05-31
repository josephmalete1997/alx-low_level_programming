#include "main.h"
/**
 *_strlen - computes the length of a string
 * Return: integer
 * @s: string variable
 */
int _strlen(char *s)
{
	int strlength;

	for (strlength = 0; *s != '\0'; ++s)
	{
		strlength++;
	}
	return (strlength);
}

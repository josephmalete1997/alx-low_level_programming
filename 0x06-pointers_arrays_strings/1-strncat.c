#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	/*find size of dest array*/
	while (dest[a])
		a++;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];
	/*
	dest[c + i] = '\0';
*/
	return (dest);
}

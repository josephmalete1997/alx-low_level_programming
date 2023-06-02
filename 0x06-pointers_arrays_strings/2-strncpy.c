#include "main.h"
/**
 * _strncpy-copies a string
 *@dest: pointer
 *@src; pointer
 *Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n; ++n)
	{
		dest[x] = src[x];
	}
	return (0);
}

#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: string 1
 *@src: string 2
 *Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	if (*dest != '\0' && *src != '\0')
	{
		a = 0;
		while (dest[a])
			a++;

		for (b = 0; src[b]; b++)
		{
			dest[a++] = src[b];
			return (dest);
		}

	}
	return (0);
}

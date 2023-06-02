#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: pointer variable
 *@src: pointer variable
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;
	
	if (src[n] != '\0')
	{
		x = 0;
		while (dest[x])
		{
			++x;
		}
		for (y = 0; y < n; ++y)
		{
			dest[x + y] = src[y];
		}
	}
	return (dest);

}

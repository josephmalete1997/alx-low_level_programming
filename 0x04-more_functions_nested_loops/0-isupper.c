#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: is the character that is being checked
 * Return: 1 if is upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: is the character that is being checked
 * Return: 1 if a character is and alphabet, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

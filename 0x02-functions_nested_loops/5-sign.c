#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: is the number that is being checked
 * Return: 1 if number is greater than 1,
 * 0 if equal to 0 and -1 is less than 0	
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

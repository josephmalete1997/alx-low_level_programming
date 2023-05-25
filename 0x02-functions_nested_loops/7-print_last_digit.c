#include "main.h"
/**
 *  print_last_digit - prints last digit of a number
 *  @n: Is the tested number
 *  @last: last gigit of the number
 *  Return: last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}

#include "main.h"
/**
 *more_numbers - prints numbers 10 times
 *Return: void
 */
void more_numbers(void)
{
	int num;
	int i;

	for (i = 0; i < 10; ++i)
	{
		for (num = 0; num <= 14; ++num)
		{
			if (num >= 10)
			{
				_putchar('1');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}

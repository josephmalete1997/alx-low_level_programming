#include "main.h"
/**
 *print_most_numbers - prints numbers
 * Created by Joseph jacob Malete
 *Return: void
 */
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; ++num)
	{
		if (num == '2' || num == '4')
		{
			continue;
		}
		_putchar(num);
	}
	_putchar('\n');
}

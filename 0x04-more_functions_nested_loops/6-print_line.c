#include "main.h"
/**
 *print_line - print a line
 *@n: number of times _ is printed
 *Return: void
 */
void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= n; ++line)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

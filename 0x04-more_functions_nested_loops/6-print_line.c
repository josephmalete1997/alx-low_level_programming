#include "main.h"
/**
 *print_line - print a line
 *Return: void
 */
void print_line(int n)
{
	int line;

	for (line = 0; line <= n; ++line)
	{
		_putchar('_');
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

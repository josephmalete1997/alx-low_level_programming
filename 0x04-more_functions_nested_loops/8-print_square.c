#include "main.h"
/**
 *print_square - prints a square, followed by a new line
 *@size: is the size of the sqaure
 *Return: void
 */
void print_square(int size)
{
	int l,b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; ++l)
		{
			for (b = 1; b <= size; ++b)
			{
				_putchar('#');
			}
			_putchar('\n');
		}	
	}
}

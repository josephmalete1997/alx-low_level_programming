#include "main.h"
/**
 *print_diagonal - draw digonal lines on the terminal
 *@n: number of times the character \ should be printed
 *Return: void
 */
void print_diagonal(int n)
{
	int digonal,spacer;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (digonal = 1; digonal <= n; ++digonal)
		{
			for (spacer = 1; spacer <= digonal; ++spacer)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

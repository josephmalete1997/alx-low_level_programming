#include "main.h"

/**
 *  * print_alphabet_x10 - uses the _putchar function to
 *  print alphabets from a - z 10 times
 */

void print_alphabet_x10(void)
{
	int alph;
	int count = 0;

	while (count <= 9)
	{
		for (alph = 'a'; alph <= 'z'; ++alph)
			_putchar(alph);
		++count;
		_putchar('\n');
	}
}

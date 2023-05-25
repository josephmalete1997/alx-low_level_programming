#include"main.h"

/**
 * This program prints alphabets in lowercase followed by a new lin
 * It returns void
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}

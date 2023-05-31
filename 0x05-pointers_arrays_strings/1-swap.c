#include "main.h"
/**
 *swap_int - swaps integer a and b
 *@a: integer 1
 *@b: integer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}

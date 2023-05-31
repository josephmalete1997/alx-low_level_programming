#include "main.h"
/**
 *swap_int - swaps integer a and b
 *@a and @b: intergers being swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}

#include<stdio.h>



int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar("%i", digit);
		++digit;
	}
	putchar("\n");

	return (0);
}
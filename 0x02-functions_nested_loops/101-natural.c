#include <stdio.h>
/**
 * multiples_and_sum - computes the sum of multiples of 3 and 5 
 */
void multiples_and_sum(int t, int f, int i, int sum)
{
	i = 0;
	f = 0;
	sum = 0;
	for (i = 0; i < 1024; ++i)
	{
		++t;
		++f;
		if ((f % 5 == 0) || (t % 3 == 0))
		{
			sum += f;
			sum += t;
		}
	}
	printf("%d", sum);
}

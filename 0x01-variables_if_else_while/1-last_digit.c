#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if(last>5){
		printf("is %d and is greter than 5\n",last);
		
	}else if(last==0){
		printf("is %d and is 0\n",last);
	}else if(last < 6 && last!=0){
		printf("is %d and is less than 6 and not 0\n",last);
	}
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * words
 */
int main(void)
{
	int n;
	int nl;

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	nl = n % 10;
	printf("Last digit of %d is %d and is ", n, nl);
	if (nl > 5)
	{
		printf("greater than 5\n");
	}
	if (nl == 0)
	{
		printf("0\n");
	}else if(nl < 6)
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}

#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - output negative or positive
 *
 * Return: always o (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n");
	else if (n < 0)
		primtf("%d is negative\n");
	else
		printf("%d is zer\n");
	return (0);
}

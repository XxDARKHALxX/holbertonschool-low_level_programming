#include <stdio.h>

/**
 * main -Print alphabet in lower and upper
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		char small = tolower(x);

		putchar(small);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		char upper = toupper(x);

		putchar(upper);
	}

	putchar ('\n');

	return (0);
}

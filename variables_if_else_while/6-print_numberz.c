#include <stdio.h>

/**
 * main - Prints 0 to 9.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9' ; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}

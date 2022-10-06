#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long c;
	long long int d;
	float f;

	printf("Size of char: %zu byte(s)\n", sizeof(a));
	printf("Size of int: %zu bytes(s)\n", sizeof(b));
	printf("Size of long: %zu bytes(s)\n", sizeof(c));
	printf("Size of long long int: %zu bytes(s)\n", sizeof(d));
	printf("Size of float: %zu bytes(s)\n", sizeof(f));
	return (0);
}

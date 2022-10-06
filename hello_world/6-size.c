#include <stdio.h>
int main(void)
{
	char a;
	int b;
	long c;
	long long int d;
	float f;

	printf("Size of char: %zu byte\n", sizeof(a));
	printf("Size of int: %zu bytes\n", sizeof(b));
	printf("Size of long: %zu bytes\n", sizeof(c));
	printf("Size of long long int: %zu bytes\n", sizeof(d));
	printf("Size of float: %zu bytes\n", sizeof(f));
	return (0);
}

#include <stdio.h>

/**
 * main - Prints the alphabet - z to a.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a' ; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

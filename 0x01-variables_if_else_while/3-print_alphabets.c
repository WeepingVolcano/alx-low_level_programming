#include <stdio.h>

/**
 * main - main program goes here
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchari(i);
	putchar('\n');
	return (0);
}


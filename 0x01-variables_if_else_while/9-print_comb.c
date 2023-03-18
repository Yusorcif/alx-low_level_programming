#include <stdio.h>
/**
 * main - Entry point
 * Discription: make unbeatable
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
		putchar('.');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

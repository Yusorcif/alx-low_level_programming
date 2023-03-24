#include "main.h"
/**
 * more_numbers - function thta prints 10 times
 * Return: 10 times the number
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y >= 10)
	{
	_putchar(y / 10 + 0);
	}
	_putchar(y % 10 + 0);
	}
	_putchar('\n');
	}
}


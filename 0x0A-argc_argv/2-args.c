#include "main.h"
#include <stdio.h>
/**
 * main - main function
 *
 * @argc: function parameter
 * @argv: function parameter
 *
 * Return: alway 0
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{
	printf("%s\n", argv[y]);
	}
	return (0);
}

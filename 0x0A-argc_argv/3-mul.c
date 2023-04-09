#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument number
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int y1 = 0, y2 = 0;

	if (argc == 3)
	{
		y1 = atoi(argv[1]);
		y2 = atoi(argv[2]);
		printf("%d\n", y1 * y2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

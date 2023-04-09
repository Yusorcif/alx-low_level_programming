#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - main funtion
 * @argc: argument count
 * @argv: argumen array
 * Return: alway 0
 */
int main(int argc, char *argv[])
{
	int j;
	unsigned int y;
	int sum = 0;
	char *e;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			e = argv[j];
		for (y = 0; y < strlen(e); y++)
		{
			if (e[y] < 48 || e[y] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(e);
		e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

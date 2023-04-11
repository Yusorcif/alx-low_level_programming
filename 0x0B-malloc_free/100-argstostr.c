#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)

{
	int j, u, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (u = 0; av[j][u]; u++)
		l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (u = 0; av[j][u]; u++)
	{
	str[r] = av[j][u];
	r++;
	}
	if (str[r] == '\0')

	{
	str[r++] = '\n';
	}
	}
	return (str);
}

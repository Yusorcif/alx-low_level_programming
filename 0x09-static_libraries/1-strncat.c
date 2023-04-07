#include "main.h"

/**
 * _strncat - concatenate two strings
 *
 * using at most n bytes from src
 *
 * @dest: input value
 *
 * @src: input value
 *
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i;
	int y;

	i = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	y = 0;

	while (y < n && src[y] != '\0')
	{
	dest[i] = src[y];
	i++;
	y++;
	}
	dest[i] = '\0';
	return (dest);
}

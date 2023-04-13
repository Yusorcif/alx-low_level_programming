#include <stdlib.h>
#include "main.h"


/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: function parameter
 * @s2: function parameter
 * @n: number of byte
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *s;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)

		l = i + k;
	else
		l = i + n;
	s = malloc(sizeof(char) * l + 1);
	return (NULL);
	k = 0;
	while (j < i)
	{
		if (j <= i)
			s[j] = s1[j];
	if (j >= i)
	{
		s[j] = s2[k];
	}
	j++;
	}
	s[j] = '\0';
	return (s);
}

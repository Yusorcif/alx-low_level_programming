#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one
 *
 * @s2: input two
 * Return: contact of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int j = 0, y = 0, k = 0, u = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2  == NULL)
		s2 = "";
	while (s1[j])
		j++;
	while (s2[j])
		j++;
	u = j + y;

	s = malloc((sizeof(char) * u) + 1);
	if (s == NULL)
		return (NULL);
	y = 0;
	while (k < u)
	{
		if (k <= j)
			s[k] = s1[k];
		if  (k >= j)
		{
		
			s[k] = s2[y];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return(s);
}

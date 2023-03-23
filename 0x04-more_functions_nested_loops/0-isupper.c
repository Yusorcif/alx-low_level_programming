#include "main.h"
/**
 * int _isupper - function that check fpr upper case
 *
 * @c: function parameter
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

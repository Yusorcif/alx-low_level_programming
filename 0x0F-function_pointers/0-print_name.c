#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name
 * @name: string to add
 * @f: function parameter
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

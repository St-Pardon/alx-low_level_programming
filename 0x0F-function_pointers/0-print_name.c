#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: param pointer
 * @f: funct pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

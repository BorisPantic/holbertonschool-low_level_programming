#include "function_pointers.h"

/**
 *print_name - function that prints a name
 *@name: name
 *@f: pointeur de fonction
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

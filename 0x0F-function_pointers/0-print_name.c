#include "function_pointers.h"
#include <stdlib.h>

/**
*print_name - prints a name
*@name: name fo be printed
*@f: pointer function
*
*Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}

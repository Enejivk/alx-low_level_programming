#include "main.h"
/**
*_print_rev_recursion- Function that print string in reveres
*@s: This is a pointer variable that hold the called function
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}


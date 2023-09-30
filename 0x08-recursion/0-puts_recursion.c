#include "main.h"
/**
*_puts_recursion- This recursion print the s strings.
*@s: this is a pointer that holds the char variable
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}

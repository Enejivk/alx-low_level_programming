#include "main.h"
/**
 * _strlen_recursion - This function print string length
 * @s: This holds the strings to be determind 
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return 1 + _strlen_recursion(s + 1);
}
}

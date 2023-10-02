#include "main.h"
/**
*_pow_recursion- This fuction calculate the power of a number
*@x: this holds the base
*@y: This holds the power
*Return: It returns an in to the caller of the function
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}

#include "main.h"
/**
*factorial- this function print the factorial of n
*@n: this holds the value
*Return: It returns an int
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}

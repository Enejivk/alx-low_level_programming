#include <stdio.h>
#include <stdlib.h>
/**
*customAtoi- this the fuction
*@str: this holds the value of the strings
*Return: It returns and int
*/
#include <stdio.h>

int customAtoi(const char *str)
{
int result = 0;
int sign = 1;
while (*str == ' ' || *str == '\t')
{
str++;
}
if (*str == '-' || *str == '+')
{
sign = (*str == '-') ? -1 : 1;
str++;
}
while (*str >= '0' && *str <= '9')
{
result = result * 10 + (*str - '0');
str++;
}
return (result *sign);
}

/**
*main- This is the main function
*@argc: argument count
*@argv: argument vector atoi: convert strings to integer
*Return: It return 1 if error found
*/
int main(int argc, char *argv[])
{
if (argc == 3)
{
int num1 = customAtoi(argv[1]);
int num2 = customAtoi(argv[2]);
printf("%d\n", num1 * num2);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

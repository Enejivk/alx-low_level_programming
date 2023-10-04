#include <stdio.h>
#include <stdlib.h>

/**
*main- This is the main function
*@argc: argument count
*@argv: argument vector atoi: convert strings to integer
*Return: It return 1 if error found
*/
int main(int argc, char *argv[])
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
if (argc == 3)
{
printf("%d\n", num1 * num2);
}
else
printf("error");
return (1);
}

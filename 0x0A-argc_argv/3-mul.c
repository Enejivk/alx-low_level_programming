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
if (argc == 3)
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);

printf("%d\n", num1 * num2);
}
else
printf("error\n");
return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This is the entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
/* main - this the entry point */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n ");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}

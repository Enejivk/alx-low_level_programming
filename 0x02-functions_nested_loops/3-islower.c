#include "main.h"
/**
 *_islower - This code check if for lowercase
 *@c: This is the file to be checked
 *Return: If there is lowercase it returns 1 else it return 0
 */

int _islower(int c)
{
	if (c >= 'a'  && c <= 'z')
		return (1);
	else
		return (2);
}

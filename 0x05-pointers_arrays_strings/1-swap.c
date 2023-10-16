#include "main.h"
/**
*swap_int - check the code
*@a: pointer
*@b: pointer
*Return: nothing
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}


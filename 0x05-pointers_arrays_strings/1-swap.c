#include"main.h"
/**
 *swap_int - to swap two integers
 *@a: first num
 *@b: second num
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

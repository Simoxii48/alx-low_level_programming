#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 * print_rev - function to print reversly
 * @s: the string to reverse
 */
void print_rev(char *s)
{
	int a = strlen(s);
	int i;

	for (i = a - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

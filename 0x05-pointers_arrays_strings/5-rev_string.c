#include"main.h"
#include<string.h>
#include<stdio.h>
/**
 * rev_string - function to reverse a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i;
	int j = strlen(s);

	for (i = j - 1 ; i >= 0 ; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

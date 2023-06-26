#include"main.h"
#include<string.h>
/**
 * puts2 - function to print modulus of a string
 * @str: is the string to check
 */
void puts2(char *str)
{
	int i;
	int j = strlen(str);

	for (i = 0; i < j; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

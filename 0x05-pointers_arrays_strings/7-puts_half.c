#include "main.h"

/**
 * puts_half - Prints half of a string
 * If the length is odd, it prints from the middle character onwards
 * @str: Input string
 * Return: None
 */
void puts_half(char *str)
{
	int length = 0;
	int start_index;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		start_index = length / 2;
	else
		start_index = (length + 1) / 2;

	for (; str[start_index] != '\0'; start_index++)
		_putchar(str[start_index]);

	_putchar('\n');
}

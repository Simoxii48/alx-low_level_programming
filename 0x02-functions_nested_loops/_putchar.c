#include "main.h"
#include <unistd.h>
/**
 * including main.h the header file which contains the function prototype for _putchar
 * including unistd that provides the write function
 * _putchar writes the character c to the standard output (stdout)
 * @c: The character to print
 *
 * _putchar function as we know prints one char so it takes a signle char parameter and retur	n int value
 * write first argument 1 is the file descriptor for stdout, 0 represent stdin, and 2 stderr
 * write second argument &c is the address of the char c in the memory
 * write third argument 1 specify the number of bytes to write because the char takes 1 byte so we put 1
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}

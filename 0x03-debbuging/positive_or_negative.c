#include"main.h"
/**
* main - tests function that prints if integer is 0
* Return: 0
*/

int positive_or_negative(int n)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n == 0)
	{	
		printf("%d is zero\n", n);
	}	
	return (0);
}

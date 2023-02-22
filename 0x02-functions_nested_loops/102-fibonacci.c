#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int num1, num2, fbn;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 48; i++)
	{
		fbn = num1 + num2;
		printf(", %ld", fbn);
		num1 = num2;
		num2 = fbn;
	}
	printf("\n");
	return (0);
}

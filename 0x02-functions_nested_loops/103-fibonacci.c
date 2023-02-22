#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num1, num2, fbsn, fbtn;

	num1 = 1;
	num2 = 2;
	fbsn = fbtn = 0;
	while (fbsn <= 4000000)
	{
		fbsn = num1 + num2;
		num1 = num2;
		num2 = fbsn;
		if ((num1 % 2) == 0)
		{
			fbtn += num1;
		}
	}
	printf("%ld\n", fbtn);
	return (0);
}

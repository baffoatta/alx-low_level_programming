#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int a, b, pt;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				pt = a * b;
				_putchar(44);
				_putchar(32);
				if (pt <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(pt + 48);
				}
				else if (pt <= 99)
				{
					_putchar(32);
					_putchar((pt / 10) + 48);
					_putchar((pt % 10) + 48);
				}
				else
				{
					_putchar(((pt / 100) % 10) + 48);
					_putchar(((pt / 10) % 10) + 48);
					_putchar((pt % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}

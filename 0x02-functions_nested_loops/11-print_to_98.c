#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers
 * @n: starting integer
 * Description: prints all natural number from n - 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)

		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}

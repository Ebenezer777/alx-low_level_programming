#include "main.h"

/**
 * more_numbers - Print 10 times the numbers from 0 to 14
 * Return: 10 times of the numbers from 0 to 34
 */

void more_numbers(void)

{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = ; y <= 14; y++)
	{
	if (y > 0)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}

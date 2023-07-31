#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 *@a: pointer to 2d char array
 *@size: the size of the array
 *
 * Return: void
 *
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size + 1) * i);
		sum2 += *(a + (size - 1) * (i + 1));
	}
	printf("%i, %i\n", sum1, sum2);
}
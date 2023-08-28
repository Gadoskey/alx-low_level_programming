#include "main.h"

/**
 * print_diagsums - check the code
 * @a: pointer
 * @size: pointer
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sum_main_diag = 0;
	int sum_sec_diag = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_main_diag += *(a + i * size + i);
		sum_sec_diag += *(a + i * size + (size - 1 - i));
	}
	printf("%d, ", sum_main_diag);
	printf("%d\n", sum_sec_diag);
}

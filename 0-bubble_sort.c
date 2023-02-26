#include <stdio.h>
#include "sort.h"
#include <stdlib.h>

/**
 * bubble_sort - used to sort an array of integers
 * using bubble sort algorithm
 *
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: returns void
 */

void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i = 0, j = 0;

	if (array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}

void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}



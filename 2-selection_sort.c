#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sort the the array of integers using
 * the selection sort algorithm
 *
 * @array: The array to be sorted
 * @size: the size of the array
 *
 * Return: Return nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min = 0;
	int temp;
	
	if (array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
		
		printf("\n");
	}
	
}

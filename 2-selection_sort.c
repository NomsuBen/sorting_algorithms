#include "sort.h"

/**
  * selection_sort - sort an array in asc order using the selection algorithm
  * @array: array of integers to be sorted
  * @size: number of elements of the array
  * Return: void
  */
void selection_sort(int *array, size_t size)
{
	size_t minIndex, j, i;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[minIndex] > array[j])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			swap_int_array(&array[i], &array[minIndex]);
			print_array(array, size);
		}
	}
}

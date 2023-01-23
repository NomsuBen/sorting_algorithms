#include "sort.h"

/**
  * swap_int_array - Swaps the value of array index
  * @a: address of the first integer
  * @b: address of the second integer
  * Return: void
  */
void swap_int_array(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
  * partition -  partitions an array into 2 sub arrays
  * @array: pointer to the array
  * @size: the number of elements in the array
  * @start: the last index of thye array
  * @end: the first index of the array
  * Return: The index of the pivot element of the array
  */
int partition(int *array, size_t size, int start, int end)
{
	int i, partIndex = start;
	int pivot = array[end];

	for (i = start; i < end; i++)
	{
		if (array[i] < pivot)
		{
			if (partIndex < i)
			{
				swap_int_array(&array[i], &array[partIndex]);
				print_array(array, size);
			}
			partIndex++;
		}
	}
	if (array[partIndex] > pivot)
	{
		swap_int_array(&array[partIndex], &array[size - 1]);
		print_array(array, size);
	}

	return (partIndex);
}

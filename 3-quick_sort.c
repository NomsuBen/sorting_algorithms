#include "sort.h"

/**
  * my_quick_sort - recursively sort the array using divid and conquer algor
  * @array: pointer to the array
  * @size: size of the array
  * @start: the start index of the array
  * @end: the end index of the array
  * Return: void
  */
void my_quick_sort(int *array, size_t size, int start, int end)
{
	int partIndex;

	if (start < end)
	{
		partIndex = partition(array, size, start, end);
		my_quick_sort(array, size, start, partIndex - 1);
		my_quick_sort(array, size, partIndex + 1, end);
	}
}

/**
  * quick_sort - calls the my_sort function; sorts array using quicksort
  * @array: the pointer to the array to be sorted
  * @size: The size of elements in the array
  * Return: void
  */
void quick_sort(int *array, size_t size)
{
	if (array ==  NULL || size < 2)
		return;
	my_quick_sort(array, size, 0, size - 1);
}

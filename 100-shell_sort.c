#include "sort.h"

/**
  * shell_sort - sorts an array in ascending order using shell sort algorith
  * Useing Knuth's sequence for the interval
  *
  * @array: pointer to the array of integers
  * @size: number of elements of array
  * Return: void
  */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap = 1;
	int temp;


	if (array == NULL || size < 2)
		return;
	while (gap < (size / 3))
		gap = gap * 3 + 1;
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && (array[j - gap] >
						temp); j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
		print_array(array, size);
		gap /= 3;
	}
}

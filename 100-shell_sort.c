#include "sort.h"

/**
<<<<<<< HEAD
 * shell_sort - sorts an array of integers in ascending order using the
 * Shell sort algorithm
 * @array: array to sort
 * @size: size of the array to sort
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap = 1;
	int insert;

	if (array == NULL || size < 2)
		return;

	while (gap < size / 3)
		gap = gap * 3 + 1;

=======
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
>>>>>>> 4bf653dbe2fe246997032d72d0d4f9e19c2c5afd
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
<<<<<<< HEAD
			insert = array[i];
			for (j = i; j >= gap && array[j - gap] > insert; j = j - gap)
				array[j] = array[j - gap];
			array[j] = insert;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
=======
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
>>>>>>> 4bf653dbe2fe246997032d72d0d4f9e19c2c5afd
	}
}

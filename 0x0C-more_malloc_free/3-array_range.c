#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to the newly created array on success,
 * else NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	int len, num, index;

	if (min > max)
		return (0);
	len = (max - min) + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == 0)
		return (0);
	for (num = min, index = 0; num <= max; index++, num++)
		*(arr + index) = num;
	return (arr);
}

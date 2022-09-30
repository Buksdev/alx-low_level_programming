#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: copy destination
 * @n: bytes of memory to copy
 * @src: copy source
 * Return: pointer to modified string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}

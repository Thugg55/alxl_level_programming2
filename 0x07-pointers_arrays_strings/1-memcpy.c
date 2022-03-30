#include "main.h"
/**
 * *_memcpy - copies the memory area
 * @dest: destination of the memory area
 * @src: source of the memory area
 * @n: byte
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}	

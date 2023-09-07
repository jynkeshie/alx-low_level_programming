#include <stdlib.h>
#include <string.h>
#include "main.h"


/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the allocated space for ptr in bytes.
 * @new_size: New size of the memory block in bytes.
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure.
 *
 * This function reallocates a memory block pointed to by ptr to have
 * a new size of new_size bytes. It copies the contents of the old
 * memory block to the new block up to the minimum of old_size and new_size.
 * If new_size > old_size, the additional memory is not initialized.
 * If new_size == old_size, the function does nothing and returns ptr.
 * If ptr is NULL, the function behaves like malloc(new_size).
 * If new_size is zero and ptr is not NULL, the function
 * behaves like free(ptr) and returns NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t i, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}

#include "main.h"

/**
  *_realloc - reallocate memory
  *@ptr: memory allocated pointer
  *@old_size: old memory allocated size
  *@new_size: new memory to be allocated
  *Return: newly allocated memory
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nw_ptr;
	size_t cpy_sze;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	nw_ptr = malloc(new_size);

	if (ptr != NULL)
	{
		cpy_sze = (old_size < new_size) ? old_size : new_size;
		memcpy(nw_ptr, ptr, cpy_sze);
		free(ptr);
	}

	return (nw_ptr);
}

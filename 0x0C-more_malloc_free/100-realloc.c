#include "main.h"

/**
 *_realloc - reallocates a memory block
 *@ptr: pointer to the memory previously allocated with a call to malloc
 *@old_size: size of ptr
 *@new_size: size of the new memory to be allocated
 *
 *Return: pointer to the address of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_ptr1;
	unsigned int i;
	char *old_ptr;

	if (new_size == old_ptr)
		return (ptr);
	if (new_size == old_size)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	temp_ptr1 = malloc(new_size);
	if (!temp_ptr1)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++;
				temp_ptr1[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
	          for (i = 0; i < old_size; i++)
	        	temp_ptr1[i] = old_ptr[i];
	}
	free(ptr);
        return (temp_ptr1);
}

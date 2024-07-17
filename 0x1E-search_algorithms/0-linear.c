#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	int i;
	for (i = 0; i < size; i++)
	{
					        if (array[i] == value)
							        {
									            return (i);
										            }
						        
						    }
		        return (-1);
}

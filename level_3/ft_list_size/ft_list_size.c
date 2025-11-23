#include "ft_list.h"

int ft_size_list(t_list *begin_list)
{
	if (!begin_list)
		return;
	int size;

	size = 0;
	while(begin_list)
	{
		size++;
		begin_list = begin_list->netx;
	}
	return (size);
}

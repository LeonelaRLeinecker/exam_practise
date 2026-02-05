#include "ft_list.h"

t_list *sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *begin;
	int tmp;

	if (!lst)
		return NULL;
	begin = lst;
	while(lst && lst->next)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = begin;
		}
		else
			lst = lst->next;
		
	}

	return (begin);

}

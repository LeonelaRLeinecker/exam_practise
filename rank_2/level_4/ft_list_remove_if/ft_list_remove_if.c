#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current;
	t_list *tmp;
	if (!begin_list || !*begin_list)
		return;
	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	current = *begin_list;
	while(current && current->next)
	{
		if(cmp(current->next->data, data_ref)== 0)
		{
			tmp = current->next;
			current->next = tmp->next;
			free(tmp);
		}
		else
			current = current->next;
	}
}

int cmp(void *data, void *data_ref)
{
	return (*(int *)data == *(int *)data_ref);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

t_list *create_node(char *data)
{
	t_list *node = malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return node;
}
void print_list(t_list *head)
{
	while (head)
	{
		if (head == NULL)
		return;
		printf("%s -> ", (char *)head->data);
		head = head->next;
	}
	printf("NULL\n");
}
int main(void)
{
	t_list *n1 = create_node("apple");
	t_list *n2 = create_node("banana");
	t_list *n3 = create_node("apple");
	t_list *n4 = create_node("cherry");
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	t_list *list = n1;
	printf("Before:\n");
	print_list(list);
	char *target = "apple";
	ft_list_remove_if(&list, target, cmp);
	printf("After removing '%s':\n", target);
	print_list(list);
	return 0;
}

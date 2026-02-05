#ifndef "FT_LIST_H"
# define "FT_LIST_H"
# include <stdio.h>

typedef struct t_list
{
	struct t_list *next;
	void *data;
	int value;
} t_list;

#endif

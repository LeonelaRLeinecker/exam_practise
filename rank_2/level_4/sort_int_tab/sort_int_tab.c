#include <stdio.h>
#include <stdlib.h>
void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int tmp;

	while (i < size)
	{
		j = 0;

		while( j + 1 < size)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int main()
{ 
	int tab[] = {1, 1, 8, 9, 5, 2, 3};
	int i = 0;
	sort_int_tab(tab, 7);
	while (tab[i])
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return 0;
}

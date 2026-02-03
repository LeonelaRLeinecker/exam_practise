#include <stdio.h>
#include <stdlib.h>
int	max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int max = tab[0];

	if (len == 0)
		return 0;
	while (i <= len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;		
	}
	return (max);
}

int main()
{
	int array1[5] = {-7, 8, 2, 5, -3};
	int array2[0] = {};
	int array3[1] = {-7};
	int array4[8] = {123, -8564, 56, 87, 1, -98, 7586, 4321};

	printf("the largest in {-7, 8, 2, 5, -3} is: %d\n", max(array1, 5));
	printf("is an empty array%d\n", max(array2, 0));
	printf("the largest in {-7}: %d\n", max(array3, 1));
	printf("the largest in {123, -8564, 56, 87, 1, -98, 7586, 4321} is: %d\n", max(array4, 8));

	
	return 0;
}

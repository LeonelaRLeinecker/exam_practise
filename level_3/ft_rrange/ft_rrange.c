#include <stdlib.h>
#include <stdio.h>

int abs_value(int n)
{
	if (n < 0)
		n = n * -1;
	return n;
}
int *ft_rrange(int start, int end)
{
	int i = 0;
	int len = abs_value(end) - abs_value(start) + 1;
	printf("resta de end - start +1 = %d\n", len);
	if (len < 0)
		len = len * -1;
	printf("len = %d\n", len);
	int *matrix = malloc(sizeof(int) *(len +1));

	if (!matrix)
		return NULL;
	while (i < len)
	{
		if (start < end)
		{
			matrix[i] = end;
			end--;
			printf("%d\n", matrix[i]);
		}
		else
		{
			matrix[i] = end;
			end++;
			printf("%d\n", matrix[i]);
		}
		i++;
	}
	return (matrix);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{

		int start = atoi(argv[1]);
		int end = atoi(argv[2]);
		int *matrix = ft_rrange(start, end);
		free(matrix);
	}
	return 0;
}

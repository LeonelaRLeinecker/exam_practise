#include <stdlib.h>
#include <stdio.h>

int	get_size(int start, int end)
{
	int size = 0;

	if (start < end)
		size = (end - start) + 1;
	else 
		size = (start - end) + 1;
	return (size);
}

int *ft_rrange(int start, int end)
{
	int len = get_size(start, end);
	if (len < 0)
		len *= -1;
	int *res = malloc(sizeof(int) * len);
	int i = 0;

	while(i < len)
	{
		if (end < start)
		{
			res[i] = end;
			end++;
			printf("res[i%d]: %d\n", i, res[i]);
		}
		else
		{
			res[i] = end;
			end--;
			printf("res[i%d]: %d\n", i, res[i]);
		}
		i++;
	}
	return (res);
}

int main()
{
	int start = -1;
	int end = 3;
	ft_rrange(start, end);
	return 0;
}


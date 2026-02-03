#include <stdio.h>
#include <stdlib.h>

int get_size(int start, int end)
{
	int size = 0;
	if (start < end)
		size = (end - start) + 1;
	else
		size = (start - end) + 1;
	return (size);
}
int *ft_range(int start, int end)
{
	int len = get_size(start, end);
	if (len < 0)
		len *= -1;
	int	*res = malloc(sizeof(int) * len);
	int i = 0;
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			printf("res[i] = %d\n", res[i]);
			start++;
		}
		else
		{
			res[i] = start;
			printf("res[i] = %d\n", res[i]);
			start--;
		}
		i++;
	}
	return (res);
}

int main()
{
	int start = 2;
	int end = -1;
	int *res = {ft_range(start, end)};
	printf("%ls", ft_range(start, end));
	int i = 0;
	while (res[i])
	{
		printf("%d\n", res[i]);
		i++;
	}
	free(res);
	return 0;

}

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int i;
	int len;
	int *matriz;

	i = 0;
	len = abs((end - start) + 1);
	matriz = malloc(sizeof(int) * (len + 1));
	
	if (!matriz)
	{
		printf("no hay matriz");
		return NULL;
	}
	while (i < len)
	{
		if (start < end)
		{
			printf("comienza en %d\n", start);
			matriz[i] = start;
			start++;
			i++;		
			printf("%n\n", &matriz[i]);
		}
	
		else
		{
			matriz[i] = start;
			start--;
			i++;
			printf("%n\n", &matriz[i]);
		}
	}
	return (matriz);

}

int main()
{
	int start = 20;
	int end = 15;

	ft_range(start, end);
	free(ft_range);
	return 0;


}

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int isthere(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

/*char *ft_union(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	int x = 0;
	int len = ft_strlen(str1) + ft_strlen(str2);
	char result[len];

	while (str1[i])
	{
		if (!isthere(result, str1[i]))
		{
			result[x] = str1[i];
			x++;
		}
		i++;
	}
	while(str2[j])
	{
		if (!isthere(result, str2[j]))
		{
			result[x] = str2[j];
			x++;
		}
		j++;
	}
	result[x] = '\0';
	return (result);
}*/

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		int x = 0;
		int len = ft_strlen(argv[1]) + ft_strlen(argv[2]);
		char result[len];

		while (argv[1][i])
		{
			if (!isthere(result, argv[1][i]))
			{
				result[x] = argv[1][i];
				x++;
			}
			i++;
		}
		while(argv[2][j])
		{
			if (!isthere(result, argv[2][j]))
			{
				result[x] = argv[2][j];
				x++;
			}
			j++;
		}
		result[x] = '\0';
		x = 0;
		while(result[x])
		{
			write(1, &result[x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
	return 0;

}

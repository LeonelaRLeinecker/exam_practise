#include <unistd.h>
#include <stdio.h>

int isthere(char *str, char c)
{
	int i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int ft_strlen(char *str)
{
	int i=0;
	while(str[i])
		i++;
	return i;
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		int len = ft_strlen(argv[1]);
		char aux[len];

		while(argv[1][i] != '\0')
		{
			if (isthere(argv[2], argv[1][i]) && !isthere(aux, argv[1][i]))
			{
				aux[j] = argv[1][i];
				j++;
			}
			i++;
		}
		aux[j] = '\0';
		j = 0;
		while(aux[j])
		{
			write(1, &aux[j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

